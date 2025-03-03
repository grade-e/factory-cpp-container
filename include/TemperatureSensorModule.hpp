#pragma once

#include "SensorModule.hpp"

class TemperatureSensorModule : public SensorModule {
   public:
    void processData() const override {
        std::cout << "[Temperature Module] Processing temperature data..."
                  << std::endl;
    }
};