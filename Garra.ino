#include <Servo.h>

const int Joy_x_pin = A1;
const int Joy_y_pin = A0;
const int Joy_sw_pin = 7;
const int servo_x = 5;
const int servo_y = 3;

int Joy_x;
int Joy_y;
int Joy_sw;
int last_Joy_sw = HIGH;
int mode = true;

Servo myservo_x;
Servo myservo_y;

int angulo_x = 90;
int angulo_y = 90;
const int servo_min = 0;
const int servo_max = 180;

void setup() {
  Serial.begin(9600);

  pinMode(Joy_x_pin, INPUT);
  pinMode(Joy_y_pin, INPUT);
  pinMode(Joy_sw_pin, INPUT_PULLUP);

  myservo_x.attach(servo_x);
  myservo_y.attach(servo_y);

  myservo_x.write(angulo_x);
  myservo_y.write(angulo_y);
}

void loop() {
  Joy_x = analogRead(Joy_x_pin);
  Joy_y = analogRead(Joy_y_pin);
  Joy_sw = digitalRead(Joy_sw_pin);
	
	if (Joy_sw == LOW && last_Joy_sw == HIGH) {
		mode = !mode;
	}
	last_Joy_sw = Joy_sw;
	
  int delta_x = map(Joy_x, 0, 1023, -45, 45);
  delta_x = (mode) ? delta_x * -1 : delta_x;
  int delta_y = map(Joy_y, 0, 1023, -45, 45);

  angulo_x = constrain(90 + delta_x, servo_min, servo_max);
  angulo_y = constrain(90 + delta_y, servo_min, servo_max);

  myservo_x.write(angulo_x);
  myservo_y.write(angulo_y);

  delay(50);
}
