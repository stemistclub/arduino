// chân digital 13 là chân mình cắm dây từ đèn vào mạch
// và chân digital 13 này sẽ được đặt tên là led. 
// biến led này có type là int ( số nguyên ) và = 13
int led = 13;
 

void setup() {                
  
  pinMode(led, OUTPUT);   
}
 
// voi loop chạy mãi mãi sau khi kết thúc cái void setup
void loop() {
  digitalWrite(led, HIGH);   // bật led
  delay(1000);    // độ trễ của chương trình dừng trong 1 giây, thấy đèn sáng được 1 giây                    
  digitalWrite(led, LOW);    // tắt led
  delay(1000);      // dừng chương trình 1s, đèn tắt 1s                 
}
