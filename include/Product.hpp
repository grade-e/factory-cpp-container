#pragma once

class Product {
   public:
    virtual void use() = 0;  // 순수 가상 함수
    virtual ~Product() = default;
};