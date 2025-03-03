#pragma once

#include <iostream>

class Sensor {
   public:
    virtual ~Sensor() = default;
    virtual void read() const = 0;  // 순수 가상 함수
};