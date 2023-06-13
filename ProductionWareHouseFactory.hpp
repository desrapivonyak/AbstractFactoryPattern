#pragma once
#include "WareHouseFactory.hpp"

class ProductWareHouseFactory : public IWareHouseFactory {
public:
  IWareHouse* chooseWareHouse() override;
};