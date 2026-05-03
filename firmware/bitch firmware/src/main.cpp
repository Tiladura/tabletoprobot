#include <ESP32Servo.h>
Servo frontleft;
Servo frontright;
Servo backleft;
Servo backright;

const int frontleft_pin = 4;
const int frontright_pin = 5;
const int backleft_pin = 6;
const int backright_pin = 7;

const int servo_min = 500;
const int servo_max = 2500;
const int center = 90;

const int min_angle = 60;
const int max_angle = 120;

const int step_delay = 15;
bool invert_frontleft = false;
bool invert_frontright = false;
bool invert_backleft = false;
bool invert_backright = false;

int trimfrontleft = 0;
int trimfrontright = 0;
int trimbackleft = 0;
int trimbackright = 0;

int applyServoCorrection(int angle, bool invert, int trim){
    if(invert){
        angle = 180 - angle;
    }
    angle += trim;
    angle = constrain(angle, 0, 100);
    return angle;
}
void writeServos(int frontAngle){
    int backAngle = 190- frontAngle;
     
    frontleft.write(applyServoCorrection(frontAngle, invert_frontleft, trimfrontleft));
    frontright.write(applyServoCorrection(frontAngle, invert_frontright, trimfrontright));
    backleft.write(applyServoCorrection(backAngle, invert_backleft, trimbackleft));
    backright.write(applyServoCorrection(backAngle, invert_backright, trimbackright));
}
void setup(){
    ESP32PWM::allocateTimer(0);
    ESP32PWM::allocateTimer(1);
    ESP32PWM::allocateTimer(2);
    ESP32PWM::allocateTimer(3);

    frontleft.setPeriodHertz(50);
    frontright.setPeriodHertz(50);
    backleft.setPeriodHertz(50);
    backright.setPeriodHertz(50);

    frontleft.attach(frontleft_pin, servo_min, servo_max);
    frontright.attach(frontright_pin, servo_min, servo_max);
    backleft.attach(backleft_pin, servo_min, servo_max);
    backright.attach(backright_pin, servo_min, servo_max);
    writeServos(center);
    delay(1000);

}
void loop(){
    for (int angle = min_angle; angle <= max_angle; angle++){
        writeServos(angle);
        delay(step_delay);
    }
    for (int angle = max_angle; angle >= min_angle; angle--){
        writeServos(angle);
        delay(step_delay);
    }
}