#include "SensorFactory.hpp"

int main() {
    auto tempModule = SensorFactory::createTemperatureModule(2);
    auto rangeModule = SensorFactory::createPressureModule(1);

    // 센서 데이터 읽기
    tempModule->readAll();
    rangeModule->readAll();

    // 센서 데이터 처리
    tempModule->processData();
    rangeModule->processData();

    return 0;
}