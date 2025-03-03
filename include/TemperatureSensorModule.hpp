#pragma once

#include "SensorModule.hpp"
#include "TemperatureSensor.hpp"

class TemperatureSensorModule : public SensorModule {
   public:
    explicit TemperatureSensorModule(int count) {
        counter_ = 0;
        for (int i = 0; i < count; ++i) {
            sensors_.push_back(std::make_unique<TemperatureSensor>(++counter_));
        }
    }

    void processData() const override {
        std::cout << "[Temperature Module] Processing temperature data..."
                  << std::endl;
    }

   private:
    int counter_;
};