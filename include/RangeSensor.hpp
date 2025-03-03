#pragma once

#include "Sensor.hpp"

class RangeSensor : public Sensor {
   public:
    explicit RangeSensor(int id) : Sensor(id) {}

    void read() const override {
        std::cout << "Reading data from range sensor " << getId() << std::endl;
    }
};