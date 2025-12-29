#include "receipt.h"

int main()
{
  Product product1("식탁", 150000);
  Product product2("의자", 80000);
  
  Receipt receipt(2000, "이케아", "경기도 고양시");
  receipt.add(1, product1);  // use-a
  receipt.add(6, product2);  // use-a
  receipt.print();
  return 0;
}