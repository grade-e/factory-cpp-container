#pragma once

#include <iostream>

#include "Product.hpp"

class ProductA : public Product {
   public:
    void use() override { std::cout << "Using Product A" << std::endl; }
};