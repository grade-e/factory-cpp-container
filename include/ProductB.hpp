#pragma once

#include <iostream>

#include "Product.hpp"

class ProductB : public Product {
   public:
    void use() override { std::cout << "Using Product B" << std::endl; }
};