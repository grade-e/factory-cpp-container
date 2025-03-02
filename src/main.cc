#include "Factory.hpp"

int main() {
    std::unique_ptr<Product> product1 = Factory::createProduct("A");
    if (product1) product1->use();

    std::unique_ptr<Product> product2 = Factory::createProduct("B");
    if (product2) product2->use();

    return 0;
}