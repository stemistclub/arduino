

void setup() { //void này để khai báo chân đầu ra hay đầu vào 
  
  pinMode(LED_BUILTIN, OUTPUT); //LED_BUILTIN là kí hiệu led on board của arduino
}                               //LED là chân ra nên ở đây là output


void loop() { // lặp đi lặp lại các dòng code
  digitalWrite(LED_BUILTIN, HIGH);   // bật led
  delay(1000);    // độ trễ của chương trình                    
  digitalWrite(LED_BUILTIN, LOW);    // tắt led
  delay(1000);                      
}
