#include <pop7.h>

uint8_t numSensor = 5;
uint16_t sensor_port[] = { 0, 1, 2, 3, 4 };
long min_sensor_values[] = { 251, 219, 283, 173, 216 };
long max_sensor_values[] = { 988, 980, 990, 961, 976 };
int ref = 400;

float present_position, errors = 0, output = 0, integral, derivative, previous_error;
uint16_t state_on_Line = 0, setpoint = 2000;
uint32_t _lastPosition;
extern volatile unsigned long timer0_millis;

void setup() {
  // Serial.begin(9600);
}

void loop() {
  OK();
  delay(1000);
  // view_sensor();
  // view_position();

  // while (analog(2) > ref) {
  //   fd(30);
  // }

  // robot_track(0.04, 0.60, 50);
  // straight();
  zone4();
  // robot_track(0.04, 0.60, 50);
  // straight();
  //ออกโค้ง
  // zoneb2();
  robot_stop();
}