#pragma once

#include "RangeSensor.hpp"
#include "RangeSensorModule.hpp"
#include "TemperatureSensor.hpp"
#include "TemperatureSensorModule.hpp"

class SensorFactory {
   public:
    static std::unique_ptr<SensorModule> createTemperatureModule(int count) {
        auto module = std::make_unique<TemperatureSensorModule>();
        for (int i = 0; i < count; ++i) {
            module->addSensor(std::make_unique<TemperatureSensor>());
        }
        return module;
    }

    static std::unique_ptr<SensorModule> createPressureModule(int count) {
        auto module = std::make_unique<RangeSensorModule>();
        for (int i = 0; i < count; ++i) {
            module->addSensor(std::make_unique<RangeSensor>());
        }
        return module;
    }
};