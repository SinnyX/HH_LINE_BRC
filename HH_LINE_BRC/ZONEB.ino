void zoneb1() {
  robot_timer(0.04, 0.60, 50, 1000);
  robot_timer(0.04, 0.40, 30, 8000);
  robot_track(0.04, 0.60, 30);
  turn_left();
  robot_track(0.04, 0.60, 25);
  turn_right();
  robot_timer(0.04, 0.60, 40, 2400);
  //เข้าฉาก
  robot_track(0.04, 0.60, 30);
  turn_right();
  robot_timer(0.01, 0.60, 30, 200);
  robot_track(0.04, 0.60, 30);
  turn_right();
  robot_timer(0.01, 0.60, 30, 200);
  //โค้งคลื่น
  robot_timer(0.04, 0.60, 30, 850);
  robot_timer(0.04, 0.60, 40, 2500);
  robot_track(0.04, 0.60, 40);
  turn_right();
}

void zoneb2() {
  // robot_timer(0.025, 0.30, 30, 15000);
  // robot_timer(0.025, 0.80, 40, 13000);

  robot_timer(0.025, 0.80, 40, 200);

  robot_timer(0.025, 0.80, 70, 400);
  robot_timer(0.025, 0.80, 40, 1000);
  robot_timer(0.025, 0.80, 70, 300);
  robot_timer(0.025, 0.80, 40, 1200);

  robot_timer(0.025, 0.80, 70, 200);
  robot_timer(0.025, 0.80, 40, 1200);
  // robot_timer(0.025, 0.80, 70, 300);
  // robot_timer(0.025, 0.80, 40, 1500);
}