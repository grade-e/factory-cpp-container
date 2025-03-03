#pragma once

#include "Sensor.hpp"

class RangeSensor : public Sensor {
   public:
    void read() const override {
        std::cout << "Reading data from range sensor" << std::endl;
    }
};