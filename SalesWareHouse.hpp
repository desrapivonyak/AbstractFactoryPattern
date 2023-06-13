#pragma once
#include "WareHouseInterface.hpp"
#include <iostream>

class SalesWareHouse : public IWareHouse {
public:
  void productOut() override;
};