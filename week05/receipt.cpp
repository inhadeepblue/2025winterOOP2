#include "receipt.h"

Receipt::Receipt(int invoiceNumber, string companyName, string companyAddress) :
	company(companyName, companyAddress), receiptNumber(invoiceNumber), receiptTotal(0)
{  
}
Receipt::~Receipt()
{
}
void Receipt::add(int quantity, Product product)
{
	receiptTotal = receiptTotal + (quantity * product.getPrice());
}
void Receipt::print() const
{
   company.print();
   cout << "영수증 번호: " << receiptNumber << '\n';
   cout << "영수증 금액: " << receiptTotal << "원\n";
}