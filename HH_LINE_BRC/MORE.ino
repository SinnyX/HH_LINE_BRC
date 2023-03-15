void view_sensor() {
  // int l1, l2, m, r2, r1;
  // while (true) {
  //   l1 = analog(0);
  //   l2 = analog(1);
  //   m = analog(2);
  //   r2 = analog(3);
  //   r1 = analog(4);
  //   Serial.print(l1);
  //   Serial.print(" ");
  //   Serial.print(l2);
  //   Serial.print(" ");
  //   Serial.print(m);
  //   Serial.print(" ");
  //   Serial.print(r2);
  //   Serial.print(" ");
  //   Serial.print(r1);
  //   Serial.println();
  //   if (sw_OK()) {
  //     break;
  //   }
  // }
  while (true) {
    for (int i = 0; i < numSensor; i++) {
      sensor_port[i] = analog(i);
      Serial.print(sensor_port[i]);
      Serial.print(" ");
    }
    Serial.println();
    if (sw_OK()) {
      break;
    }
  }
}

void view_position() {
  while (true) {
    present_position = readline();
    errors = setpoint - present_position;
    Serial.println(errors);
    if (sw_OK()) {
      break;
    }
  }
}

void turn_left() {
  sl(50);
  delay(100);
  while (analog(1) > ref) {
    sl(30);
  }
  // ao();
}

void turn_right() {
  sr(50);
  delay(100);
  while (analog(3) > ref) {
    sr(30);
  }
  // ao();
}

void straight() {
  fd(50);
  delay(40);
}

void robot_stop() {
  ao();
  delay(200);
}