#include "product.h"

Product::Product(string name, int unitPrice) : name(name), unitPrice(unitPrice)
{
}
Product::~Product()
{
} 
int Product::getPrice() const
{
  return unitPrice;
}