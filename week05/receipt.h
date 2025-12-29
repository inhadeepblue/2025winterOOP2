#pragma once
#include "product.h"
#include "company.h"

class Receipt
{
  private:
    int receiptNumber;
    int receiptTotal;
    Company company;  // has-a
  public: 
     Receipt(int receiptNumber, string companyName, string companyAddress);  // composition
    ~Receipt();
    void add(int quantity, Product product);  // use-a, dependency
    void print() const; 
};