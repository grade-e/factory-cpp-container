#include "SensorFactory.hpp"

int main() {
    auto tempModule = SensorFactory::createTemperatureModule(2);
    auto rangeModule = SensorFactory::createRangeModule(3);

    tempModule->readAll();
    rangeModule->readAll();

    tempModule->processData();
    rangeModule->processData();

    return 0;
}