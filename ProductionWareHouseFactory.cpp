#pragma once
#include "ProductionWareHouse.hpp"
#include "ProductionWareHouseFactory.hpp"

IWareHouse* ProductWareHouseFactory::chooseWareHouse() {
  return new ProductionWareHouse();
}