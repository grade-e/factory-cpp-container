#include <memory>

#include "Product.hpp"
#include "ProductA.hpp"
#include "ProductB.hpp"

class Factory {
   public:
    static std::unique_ptr<Product> createProduct(const std::string& type) {
        if (type == "A") {
            return std::make_unique<ProductA>();
        } else if (type == "B") {
            return std::make_unique<ProductB>();
        } else {
            return nullptr;
        }
    }
};