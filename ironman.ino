#include <Servo.h> //servo kütüphanesini dahil eder
Servo vizor;

String voice; // voice değişkeni tanımlanıyor
const int buzzer = 11; // hoperlör tanımlıyor
int 
a, ad, b, c, cd, d, dd, e, f, fd, g, gd, a2, ad2, b2, c2, cd2, d2, dd2, e2, f2, fd2, g2, gd2, a3, // notalar

led1 = 2, //led'lerin bağlı olduğu pinler  
led2 = 3, 
led3 = 4,
led4 = 5,
led5 = 6,
led6 = 7,
led7 = 8,
led8 = 9;
 
 
void setup() {
  Serial.begin(9600); // seri iletişim başlar
  pinMode(2, OUTPUT); // led'ler çıkış elemanı
  pinMode(3, OUTPUT); 
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT); 
  vizor.attach(10); 
  vizor.write(0);
  pinMode(buzzer, OUTPUT);
  
a=440;   //  nota tonları
ad=466;
b=494;

c=523;
cd=554;
d=587;
dd=622;
e=659;
f = 698;
fd = 740;
g = 784;
gd = 830;

a2 = 880;
ad2 = 932;
b2 = 988;
c2 = 1046;
cd2 = 1108;
d2 = 1174;
dd2 = 1244;
e2 = 1318;
f2 = 1396;
fd2 = 1480;
g2 = 1568;
gd2 = 1660;
a3 = 1760;
}
//-----------------------------------------------------------------------//  
void loop() {
  while (Serial.available()){  //bilgi geldiği sürece
  delay(10); //güvenlik gecikmesi uygula
  char c = Serial.read(); //verileri oku c karekterine at
  if (c == '#') {break;} //# işareti gelirse,yani okuma bitmişse döngüyü durdur.
  voice += c; //gelen her karekteri ekle ve komut cümlesini tamamla
  }  
  if (voice.length() > 0) {
    Serial.println(voice); 
//-----------------------------------------------------------------------//    
  //----------Tüm ledlerin kontrolü----------//  
       if(voice == "*gözler"||voice == "*Gözler ") {digitalWrite(4,HIGH);digitalWrite(5,HIGH);digitalWrite(6,HIGH);digitalWrite(7,HIGH);digitalWrite(8,HIGH);digitalWrite(9,HIGH);}
  else if(voice == "*göz kapat"||voice == "*Göz kapat ") {digitalWrite(4,LOW);digitalWrite(5,LOW);digitalWrite(6,LOW);digitalWrite(7,LOW);digitalWrite(8,LOW);digitalWrite(9,LOW);}
  
  //----------Adım Adım Açma komutlar----------// 
  else if(voice == "*lazerler" || voice == "*Lazerler") {digitalWrite(3, HIGH);digitalWrite(2, HIGH);} // lazer çalıştırma komutu
  else if(voice == "*selam dur" || voice == "*Selam dur") {tone(buzzer, c);  // muzik çalıştırma kodu
    delay(800);
    tone(buzzer, f);    delay(800);
    tone(buzzer, g);    delay(800);
    tone(buzzer, gd);    delay(800);
    tone(buzzer, e);    delay(400);
    tone(buzzer, g);    delay(200);        
    tone(buzzer, f);    delay(1600);        
    noTone(buzzer);    delay(300);
    tone(buzzer, f);    delay(800);        
    tone(buzzer, ad2);    delay(800);        
    tone(buzzer, c2);    delay(800);        
    tone(buzzer, cd2);    delay(800);
    tone(buzzer, a2);    delay(400);
    tone(buzzer, c2);    delay(200);
    tone(buzzer, ad2);    delay(1600);      
    tone(buzzer, c2);    delay(200);        
    tone(buzzer, ad2);    delay(200);        
    tone(buzzer, c2);    delay(200);        
    tone(buzzer, g);    delay(400);        
    noTone(buzzer);    delay(100);  
    tone(buzzer, g);    delay(400);        
    tone(buzzer, ad);    delay(200);
    tone(buzzer, gd);    delay(400);   
    tone(buzzer, e);    delay(200);
    tone(buzzer, f);    delay(400);   
    tone(buzzer, g);    delay(200);
    tone(buzzer, gd);    delay(400);        
    tone(buzzer, ad);    delay(200);        
    tone(buzzer, c2);    delay(400);        
    tone(buzzer, cd2);    delay(200);        
    tone(buzzer, dd2);    delay(400);        
    tone(buzzer, f2);    delay(200);        
    tone(buzzer, dd2);    delay(400);  
    tone(buzzer, dd);    delay(200);
    tone(buzzer, d);    delay(200);
    tone(buzzer, dd);    delay(200);
    tone(buzzer, c2);    delay(800);
    tone(buzzer, ad);    delay(800);
    tone(buzzer, gd);    delay(1600);
    tone(buzzer, c);    delay(200);
    tone(buzzer, b);    delay(200);
    tone(buzzer, c);    delay(200);
    tone(buzzer, g);    delay(800);
    tone(buzzer, c);    delay(800);
    tone(buzzer, c2);    delay(800);
    tone(buzzer, ad);    delay(200);
    tone(buzzer, gd);    delay(200);
    tone(buzzer, g);    delay(400);
    tone(buzzer, gd);    delay(200);
    tone(buzzer, f);    delay(800);
    tone(buzzer, f2);    delay(800);
    tone(buzzer, dd2);    delay(200);
    tone(buzzer, cd2);    delay(400);
    tone(buzzer, c2);    delay(200);
    tone(buzzer, ad);    delay(400);
    tone(buzzer, gd);    delay(200);
    tone(buzzer, g);    delay(400);
    tone(buzzer, f);    delay(200);
    tone(buzzer, c2);    delay(400);
    tone(buzzer, c);    delay(800);
    tone(buzzer, f);    delay(1600);
    tone(buzzer, c);    delay(800);
    tone(buzzer, f);    delay(800);
    tone(buzzer, g);    delay(800);
    tone(buzzer, gd);    delay(800);
    tone(buzzer, e);    delay(400);
    tone(buzzer, g);    delay(200);        
    tone(buzzer, f);    delay(1600);        
    noTone(buzzer);    delay(300);
    tone(buzzer, f);    delay(800);        
    tone(buzzer, ad2);    delay(800);        
    tone(buzzer, c2);    delay(800);        
    tone(buzzer, cd2);    delay(400);
    tone(buzzer, ad2);    delay(400);
    tone(buzzer, a2);    delay(400);
    tone(buzzer, c2);    delay(400);
    tone(buzzer, ad2);    delay(800);      
    tone(buzzer, c2);    delay(200);        
    tone(buzzer, ad2);    delay(200);        
    tone(buzzer, c2);    delay(200);        
    tone(buzzer, g);    delay(400);        
    noTone(buzzer);    delay(100);  
    tone(buzzer, g);    delay(400);        
    tone(buzzer, ad);    delay(200);
    tone(buzzer, gd);    delay(400);   
    tone(buzzer, e);    delay(200);
    tone(buzzer, f);    delay(400);   
    tone(buzzer, g);    delay(200);
    tone(buzzer, gd);    delay(400);        
    tone(buzzer, ad);    delay(200);        
    tone(buzzer, c2);    delay(400);        
    tone(buzzer, cd2);    delay(200);        
    tone(buzzer, dd2);    delay(400);        
    tone(buzzer, f2);    delay(200);        
    tone(buzzer, dd2);    delay(400);  
    tone(buzzer, dd);    delay(200);
    tone(buzzer, d);    delay(200);
    tone(buzzer, dd);    delay(200);
    tone(buzzer, c2);    delay(800);
    tone(buzzer, ad);    delay(800);
    tone(buzzer, gd);    delay(1600);
    tone(buzzer, c);    delay(200);
    tone(buzzer, b);    delay(200);
    tone(buzzer, c);    delay(200);
    tone(buzzer, g);    delay(800);
    tone(buzzer, c);    delay(800);
    tone(buzzer, c2);    delay(800);
    tone(buzzer, ad);    delay(200);
    tone(buzzer, gd);    delay(200);
    tone(buzzer, g);    delay(400);
    tone(buzzer, gd);    delay(200);
    tone(buzzer, f);    delay(800);
    tone(buzzer, f2);    delay(800);
    tone(buzzer, dd2);    delay(200);
    tone(buzzer, cd2);    delay(400);
    tone(buzzer, c2);    delay(200);
    tone(buzzer, ad);    delay(400);
    tone(buzzer, gd);    delay(200);
    tone(buzzer, g);    delay(400);
    tone(buzzer, f);    delay(200);
    tone(buzzer, c2);    delay(400);
    tone(buzzer, c);    delay(800);
    tone(buzzer, f);    delay(1600);
    noTone(buzzer);
    delay(300);}
    
  else if(voice == "*maske" || voice == "*Maske") {for(int derece=0; derece < 150;derece++) {vizor.write(150); delay(15);} // servo açılma derecesi
   {digitalWrite(4,LOW);digitalWrite(5,LOW);digitalWrite(6,LOW);digitalWrite(7,LOW);digitalWrite(8,LOW);digitalWrite(9,LOW);} } // maske açılınca gözler kapatma kodu
  
  //----------Adım Adım Kapatma komutları----------// 
  else if(voice == "*lazer kapat"||voice == "*Lazer kapat") {digitalWrite(2, LOW);digitalWrite(3, LOW);} // lazer kapatma kodu
  else if(voice == "*maske kapat"|| voice == "*Maske kapat") {for(int derece=150; derece > 0;derece--) {vizor.write(0); delay(10);} {
  digitalWrite(4,HIGH);digitalWrite(5,HIGH);digitalWrite(6,HIGH);digitalWrite(7,HIGH);digitalWrite(8,HIGH);digitalWrite(9,HIGH);delay(50);
  digitalWrite(4,LOW) ;digitalWrite(5,LOW) ;digitalWrite(6,LOW) ;digitalWrite(7,LOW) ;digitalWrite(8,LOW) ;digitalWrite(9,LOW) ;delay(50);
  digitalWrite(4,HIGH);digitalWrite(5,HIGH);digitalWrite(6,HIGH);digitalWrite(7,HIGH);digitalWrite(8,HIGH);digitalWrite(9,HIGH);delay(100);
  digitalWrite(4,LOW) ;digitalWrite(5,LOW) ;digitalWrite(6,LOW) ;digitalWrite(7,LOW) ;digitalWrite(8,LOW) ;digitalWrite(9,LOW) ;delay(50);
  digitalWrite(4,HIGH);digitalWrite(5,HIGH);digitalWrite(6,HIGH);digitalWrite(7,HIGH);digitalWrite(8,HIGH);digitalWrite(9,HIGH);delay(100);
  digitalWrite(4,LOW) ;digitalWrite(5,LOW) ;digitalWrite(6,LOW) ;digitalWrite(7,LOW) ;digitalWrite(8,LOW) ;digitalWrite(9,LOW) ;delay(100);
  digitalWrite(4,HIGH);digitalWrite(5,HIGH);digitalWrite(6,HIGH);digitalWrite(7,HIGH);digitalWrite(8,HIGH);digitalWrite(9,HIGH);delay(50);
  digitalWrite(4,LOW);digitalWrite(5,LOW) ;digitalWrite(6,LOW) ;digitalWrite(7,LOW) ;digitalWrite(8,LOW) ;digitalWrite(9,LOW) ;delay(50);
  digitalWrite(4,HIGH);digitalWrite(5,HIGH);digitalWrite(6,HIGH);digitalWrite(7,HIGH);digitalWrite(8,HIGH);digitalWrite(9,HIGH);delay(70);
  digitalWrite(4,LOW); digitalWrite(5,LOW) ;digitalWrite(6,LOW) ;digitalWrite(7,LOW) ;digitalWrite(8,LOW) ;digitalWrite(9,LOW) ;delay(70);
  digitalWrite(4,HIGH);digitalWrite(5,HIGH);digitalWrite(6,HIGH);digitalWrite(7,HIGH);digitalWrite(8,HIGH);digitalWrite(9,HIGH);delay ;
 } }
//-----------------------------------------------------------------------//  
voice="";}} //komutlar bitincce voice değişkenini sıfırla
