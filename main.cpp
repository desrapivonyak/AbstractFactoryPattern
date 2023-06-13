#include <iostream>
#include <memory>
#include "WareHouseFactory.hpp"
#include "SalesWareHousefactory.hpp"
#include "ProductionWareHouseFactory.hpp"

int main() {
  std::unique_ptr<IWareHouseFactory> newProductFactory = std::make_unique<ProductWareHouseFactory>();
  std::unique_ptr<IWareHouse> product1(newProductFactory->chooseWareHouse());
  product1->productOut();
  
  std::unique_ptr<IWareHouseFactory> newSalesFactory = std::make_unique<SalesWareHouseFactory>();
  std::unique_ptr<IWareHouse> product(newSalesFactory->chooseWareHouse());
  product->productOut();

  return 0;
}
