#pragma once
#include "SalesWareHousefactory.hpp"
#include "SalesWareHouse.hpp"

IWareHouse* SalesWareHouseFactory::chooseWareHouse() {
  return new SalesWareHouse();
}