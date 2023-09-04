#include "Servo.h"

Servo::Servo(){
    _value = 0;
    pin = 0;
    this->_attached = false;
}

uint8_t Servo::attach(int pin){
    this->pin = pin;
    this->_attached = true;
    return 1;
}

uint8_t Servo::attach(int pin, int min, int max){
    this->pin = pin;
    this->min = min;
    this->max = max;
    this->_attached = true;
    return 1;
}

void Servo::detach(){
    this->_attached = false;
}

void Servo::write(int value){
    this->_value = value;
}

void Servo::writeMicroseconds(int value){
    this->_value = value;
}

int Servo::read(){
    return this->_value;
}

int Servo::readMicroseconds(){
    return this->_value * 10;
}



