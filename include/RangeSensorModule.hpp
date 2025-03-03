#pragma once

#include "SensorModule.hpp"

class RangeSensorModule : public SensorModule {
   public:
    void processData() const override {
        std::cout << "[Range Module] Processing pressure data..." << std::endl;
    }
};