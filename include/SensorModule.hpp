#pragma once

#include <memory>
#include <vector>

#include "Sensor.hpp"

class SensorModule {
   public:
    virtual ~SensorModule() = default;

    virtual void processData() const = 0;  // 센서 모듈별 데이터 처리 방식

    void readAll() const {
        for (const auto& sensor : sensors_) {
            sensor->read();
        }
    }

   protected:
    std::vector<std::unique_ptr<Sensor>> sensors_;
    static int counter_;
};