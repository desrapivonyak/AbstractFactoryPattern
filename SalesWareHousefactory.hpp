#pragma once
#include "WareHouseFactory.hpp"

class SalesWareHouseFactory : public IWareHouseFactory {
public:
  IWareHouse* chooseWareHouse() override;
};