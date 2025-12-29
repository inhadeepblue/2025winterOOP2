#include "company.h"

Company::Company(string companyName, string companyAddress) 
	: companyName(companyName), companyAddress(companyAddress)
{
}
Company::~Company()
{
}
void Company::print() const
{
	cout << "회사 이름 : " << companyName << '\n';
	cout << "회사 주소 : " << companyAddress << '\n';
}
