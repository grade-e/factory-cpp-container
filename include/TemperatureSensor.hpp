#pragma once

#include "Sensor.hpp"

class TemperatureSensor : public Sensor {
   public:
    TemperatureSensor(int id) : Sensor(id) {}

    void read() const override {
        std::cout << "Reading data from temperature sensor " << getId()
                  << std::endl;
    }
};