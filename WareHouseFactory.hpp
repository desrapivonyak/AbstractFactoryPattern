#pragma once
#include "WareHouseInterface.hpp"

class IWareHouseFactory {
public:
  virtual IWareHouse* chooseWareHouse() = 0;
  virtual ~IWareHouseFactory() {};
};