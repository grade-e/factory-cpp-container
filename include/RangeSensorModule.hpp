#pragma once

#include "RangeSensor.hpp"
#include "SensorModule.hpp"

class RangeSensorModule : public SensorModule {
   public:
    explicit RangeSensorModule(int count) {
        counter_ = 0;
        for (int i = 0; i < count; ++i) {
            sensors_.push_back(std::make_unique<RangeSensor>(++counter_));
        }
    }

    void processData() const override {
        std::cout << "[Range Module] Processing range data..." << std::endl;
    }

   private:
    int counter_;
};