#pragma once

#include "RangeSensor.hpp"
#include "RangeSensorModule.hpp"
#include "TemperatureSensor.hpp"
#include "TemperatureSensorModule.hpp"

class SensorFactory {
   public:
    static std::unique_ptr<SensorModule> createTemperatureModule(int count) {
        return std::make_unique<TemperatureSensorModule>(count);
    }

    static std::unique_ptr<SensorModule> createRangeModule(int count) {
        return std::make_unique<RangeSensorModule>(count);
    }
};