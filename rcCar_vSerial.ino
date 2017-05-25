#include <SoftwarwSerial.h>



//모터에서 아두이노에 연결한 번호

int A_1A = 6;

int A_1B = 11;

int B_1A = 3;

int B_1B = 5;



void setup()

{

  Serial.begin(9600);

  pinMode(A_1A, OUTPUT);

  pinMode(A_1B, OUTPUT);

  pinMode(B_1A, OUTPUT);

  pinMode(B_1B, OUTPUT);

  digitalWrite(A_1A, LOW);

  digitalWrite(A_1B, LOW);

  digitalWrite(B_1A, LOW);

  digitalWrite(B_1B, LOW);  

}



void loop() {

  /*

    'f' - 전진명령(forward)

    'b' - 후진명령(back)

    'l' - 왼쪽명령(left)

    'r' - 오른쪽명령(right)

    's' - 정지명령(stop)

  */  

  switch (cmd) {

    case 'f':

      //모터A 정회전

      analogWrite(A_1A, speed);

      analogWrite(A_1B, 0);

      //모터B 정회전

      analogWrite(B_1A, speed);

      analogWrite(B_1B, 0);

      break;

    case 'b':

      //모터A 역회전

      analogWrite(A_1A, 0);

      analogWrite(A_1B, speed);

      //모터B 역회전

      analogWrite(B_1A, 0);

      analogWrite(B_1B, speed);

      break;

    case 'r':

      //모터A 정회전

      analogWrite(A_1A, 0);

      analogWrite(A_1B, 0);

      //모터B 역회전

      analogWrite(B_1A, speed);

      analogWrite(B_1B, 0);

      break;

    case 'l':

      //모터A 역회전

      analogWrite(A_1A, speed);

      analogWrite(A_1B, 0);

      //모터B 정회전

      analogWrite(B_1A, 0);

      analogWrite(B_1B, 0);

      break;

    case 's':

      //모터A 정지

      analogWrite(A_1A, 0);

      analogWrite(A_1B, 0);

      //모터B 정지

      analogWrite(B_1A, 0);

      analogWrite(B_1B, 0);

      break;

  }

}
