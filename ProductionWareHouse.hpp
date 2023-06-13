#pragma once
#include "WareHouseInterface.hpp"

class ProductionWareHouse : public IWareHouse{
public:  
  void productOut() override;
};