#pragma once

#include <iostream>

class Sensor {
   public:
    virtual ~Sensor() = default;
    virtual void read() const = 0;
    int getId() const { return id_; }

   protected:
    explicit Sensor(int id) : id_(id) {}

   private:
    int id_;
};