int trig = 8;     // khai báo chân trig của cảm biến
int echo = 7;     // khai báo chân echo của cảm biến
 
void setup()
{
   Serial.begin(9600);    // giao tiếp với serial monitor
   pinMode(trig,OUTPUT); // trig sẽ là chân phát tín hiệu 
   pinMode(echo,INPUT);  // echo là chân nhận tín hiệu 
}

void loop()
{
 
  int khoangcach;


  // tin hieu
  digitalWrite(trig,0);
  delay(2);
  digitalWrite(trig,1);
  delay(5);
  digitalWrite(trig,0);
/
  
  
  khoangcach = int(dothoigian/2/29.1);// tính kc đến vật
  // tính được sóng âm di chuyển 1 cm trong không khí sẽ mất 1000 / 344 * 100 ~= 29.1 ms.


  Serial.print(khoangcach);
  Serial.println("cm");
  delay(200);
  
  

}
