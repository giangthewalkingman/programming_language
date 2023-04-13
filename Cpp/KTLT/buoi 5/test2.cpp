char p; // Khai báo biến p để dùng trong chương trình
void setup(){
Serial.begin(9600); // mở cổng giao tiếp/hiển thị với máy tính qua UART
pinMode(5, OUTPUT); // set cổng 5 là cổng cho tín hiệu ra
pinMode(4, OUTPUT); // set cổng 4 là cổng cho tín hiệu ra
pinMode(3, OUTPUT); // set cổng 3 là cổng cho tín hiệu ra
pinMode(2, OUTPUT); // set cổng 2 là cổng cho tín hiệu ra
} 
int speedCar = 200; // set tốc độ của xe là 200 (chia theo từ 1-255, 255 là tốc độ max tương ứng với 5V)
void traidung() {
  digitalWrite(5, LOW); // ghi tín hiệu ra cho chân 5 là điện áp thấp
  digitalWrite(4, LOW); // ghi tín hiệu ra cho chân 4 là điện áp thấp
}

void phaidung() {
  digitalWrite(3, LOW); // ghi tín hiệu ra cho chân 3 là điện áp thấp
  digitalWrite(2, LOW); // ghi tín hiệu ra cho chân 2 là điện áp thấp
}

void traitien() {   
  analogWrite(5, speedCar); // ghi tốc độ cho chân 5 với tốc độ là speedcar mình đang để ở đây là 200
  digitalWrite(4, LOW); //ghi tín hiệu ra cho chân 4 là điện áp thấp
}
 
void trailui() {
  analogWrite(5, 255 - speedCar);  // ghi tốc độ cho chân 5 với tốc độ là (255 - speedcar) mình đang để ở đây là 200
  digitalWrite(4, HIGH); // ghi tín hiệu ra cho chân 4 là điện áp cao
}
 
void phaitien() {
  analogWrite(3, speedCar); // ghi tốc độ cho chân 3 với tốc độ là speedcar mình đang để ở đây là 200
  digitalWrite(2, LOW); //ghi tín hiệu ra cho chân 2 là điện áp thấp
}

void phailui() {
  analogWrite(3, 255 - speedCar); // ghi tốc độ cho chân 3 với tốc độ là (255 - speedcar) mình đang để ở đây là 200
  digitalWrite(2, HIGH); // ghi tín hiệu ra cho chân 2 là điện áp cao
}

void dung() {
  traidung(); // để cho động cơ dừng, cả bên trái và phải đều phải dừng
  phaidung();
}
void tien() {
  traitien(); // cả 2 bên trái phải đều tiến xe sẽ tiến
  phaitien();
}
void retrai() {
  traidung(); // muốn rẽ trái được, 2 bánh bên trái đứng yên 2 bánh bên phải di chuyển 
  phaitien(); 
}
void rephai() {
  traitien(); // muốn rẽ phải được, 2 bánh bên phải đứng yên 2 bánh bên trái di chuyển
  phaidung();
}
void lui() {
  trailui(); //để cho động cơ lùi, cả bên trái và phải đều phải lùi
  phailui();
}

void loop() {
// hàm if để check xem nếu cổng Serial có dữ liệu đến thì các hàm trong {} mới chạy 
if (Serial.available() > 0) {
  p = Serial.read(); // hàm Serial.read để đọc dữ liệu trên Serial sau đó được gắn vào biến p đã khai báo từ trước
}
 
if(p == 'F'){
  tien(); // khi dữ liệu của p là "F" thì sẽ thực hiện hàm tien()
}
 
else if(p == 'B'){
  lui(); // khi dữ liệu của p là "B" thì sẽ thực hiện hàm lui()
}
else if(p == 'L'){
  retrai(); // khi dữ liệu của p là "L" thì sẽ thực hiện hàm retrai()
}
 
else if(p == 'R'){
  rephai(); // khi dữ liệu của p là "R" thì sẽ thực hiện hàm rephai()
}
else if(p == 'S'){
  dung(); // khi dữ liệu của p là "S" thì sẽ thực hiện hàm dung()
}
}
