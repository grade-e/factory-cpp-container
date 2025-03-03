#pragma once

#include "Sensor.hpp"

class TemperatureSensor : public Sensor {
   public:
    void read() const override {
        std::cout << "Reading data from temperature sensor" << std::endl;
    }
};