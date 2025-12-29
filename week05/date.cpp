#include "date.h"
  
Date::Date(int year, int month, int day) : year(year), month(month), day(day)
{
  if((month < 1) ||(month > 12))
  {
    cout << "입력 가능한 달의 범위는 1월~12월 입니다";
    assert(false);
  }
  int daysInMonths[13] = {0, 31, 28, 31, 30, 31, 30, 31, 
                           31, 30, 31, 30 ,31};
  if((day < 1) ||(day > daysInMonths [month]))
  {
    cout << "날짜의 범위를 벗어났습니다!";
    assert(false);
  }
  if((year < 1900) ||(year > 2099))
  {
    cout << "년도 범위는 1900년부터 2099년 사이입니다." ;
    assert(false);
  }
}
Date::~Date()
{
}
void Date::print() const 
{
  cout << year << "년 " << month <<  "월 " << day << "일" << endl;
}