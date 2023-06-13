#pragma once

class IWareHouse {
public:
  virtual void productOut() = 0;
  virtual ~IWareHouse() {};
};