void zone1() {
  //โค้งคลื่น
  robot_timer(0.04, 0.60, 30, 5000);
  //หักศอก
  robot_track(0.04, 0.60, 30);
  turn_left();
  robot_timer(0.04, 0.60, 30, 600);
  robot_track(0.04, 0.60, 30);
  turn_right();
  robot_timer(0.04, 0.60, 30, 600);
  //ทางตรง
  robot_track(0.04, 0.60, 30);
  straight();
  //ไปบ้าน
  robot_track(0.04, 0.60, 30);
  turn_left();
  //หลังบ้าน
  //ทางตรง
  robot_track(0.04, 0.60, 30);
  straight();
  //เข้าทางโค้ง
  robot_timer(0.04, 0.60, 30, 2000);
  robot_track(0.04, 0.60, 30);
  straight();
  //ออกโค้งแคบ
  robot_timer(0.04, 0.60, 40, 6000);
  robot_track(0.04, 0.60, 30);
  straight();
  //ออกโค้ง
  robot_timer(0.04, 0.60, 30, 1500);
}

void zone2() {
  //โค้งคลื่น
  robot_timer(0.04, 0.60, 40, 400);
  robot_timer(0.04, 0.60, 30, 350);
  robot_timer(0.04, 0.60, 40, 2800);
  robot_timer(0.04, 0.60, 30, 600);
  //หักศอก
  robot_track(0.04, 0.60, 30);
  turn_left();
  robot_timer(0.04, 0.60, 30, 600);
  robot_track(0.04, 0.60, 30);
  turn_right();
  robot_timer(0.04, 0.60, 40, 600);
  //ทางตรง
  robot_track(0.04, 0.60, 40);
  straight();
  //ไปบ้าน
  robot_track(0.04, 0.60, 40);
  turn_left();
  //หลังบ้าน
  robot_track(0.04, 0.60, 40);
  straight();
  //เข้าทางโค้ง
  robot_timer(0.04, 0.60, 50, 500);
  robot_timer(0.04, 0.60, 40, 500);
  robot_track(0.04, 0.60, 50);
  straight();
  //ออกโค้งแคบ
  robot_timer(0.04, 0.70, 60, 4000);
  robot_track(0.04, 0.60, 50);
  straight();
  //ออกโค้ง
  robot_timer(0.04, 0.60, 50, 1000);
}

void zone3() {
  //โค้งคลื่น
  robot_timer(0.04, 0.60, 40, 400);
  robot_timer(0.04, 0.60, 30, 350);
  robot_timer(0.04, 0.60, 40, 2800);
  robot_timer(0.04, 0.60, 30, 650);
  //หักศอก
  robot_track(0.04, 0.60, 30);
  turn_left();
  robot_timer(0.04, 0.60, 30, 600);
  robot_track(0.04, 0.60, 30);
  turn_right();
  robot_timer(0.04, 0.60, 40, 600);
  //ทางตรง
  robot_track(0.04, 0.60, 40);
  straight();
  //ไปบ้าน
  robot_track(0.04, 0.60, 30);
  turn_left();
  //หลังบ้าน
  robot_track(0.04, 0.60, 40);
  straight();
  //เข้าทางโค้ง
  robot_timer(0.04, 0.60, 50, 500);
  robot_timer(0.04, 0.60, 30, 300);
  robot_track(0.04, 0.60, 50);
  straight();
  //ออกโค้งแคบ
  robot_timer(0.04, 0.70, 60, 4000);
}

void zone4() {
  robot_timer(0.02, 0.04, 30, 15000);
}