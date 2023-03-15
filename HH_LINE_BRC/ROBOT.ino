int readline() {
  bool onLine = false;
  unsigned long avg = 0;
  unsigned long sum = 0;
  for (uint8_t i = 0; i < numSensor; i++) {
    long value = map(analog(sensor_port[i]), min_sensor_values[i], max_sensor_values[i], 1000, 0);
    if (value > 1000) {
      value = 1000;
    } else if (value < 0) {
      value = 0;
    }
    if (value > 200) {
      onLine = true;
    }
    if (value > 50) {
      avg += (long)value * (i * 1000);
      sum += value;
    }
    // Serial.print(value);
    // Serial.print(" ");
  }
  // Serial.println();
  if (!onLine) {
    if (_lastPosition < (numSensor - 1) * 1000 / 2) {
      return 0;
    } else {
      return (numSensor - 1) * 1000;
    }
  }
  _lastPosition = avg / sum;
  return _lastPosition;
}

void calculate_pid(float Kp, float Kd, int speed_max) {
  present_position = readline();
  errors = setpoint - present_position;
  integral = integral + errors;
  derivative = (errors - previous_error);
  output = (Kp * errors) + (0 * integral) + (Kd * derivative);
  previous_error = errors;

  int leftSpeed = speed_max - output;
  int rightSpeed = speed_max + output;
  if (leftSpeed > speed_max) {
    leftSpeed = speed_max;
  } else if (leftSpeed < -speed_max) {
    leftSpeed = -speed_max;
  }
  if (rightSpeed > speed_max) {
    rightSpeed = speed_max;
  } else if (rightSpeed < -speed_max) {
    rightSpeed = -speed_max;
  }
  fd2(leftSpeed, rightSpeed);
}

void robot_timer(float Kp, float Kd, int speed_max, unsigned long period) {
  timer0_millis = 0;
  while (millis() < period) {
    calculate_pid(Kp, Kd, speed_max);
  }
}

void robot_track(float Kp, float Kd, int speed_max) {
  while (true) {
    if ((analog(0) < ref && analog(4) < ref) || (analog(0) < ref && analog(2) < ref) || (analog(2) < ref && analog(4) < ref)) {
      break;
    }
    calculate_pid(Kp, Kd, speed_max);
  }
}