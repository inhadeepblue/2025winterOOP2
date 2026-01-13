#include <list>
#include <iostream>
using namespace std;

int main()
{
    // 인스턴스화하고 변수 생성
    list<int> lst;
    int value;
    // 5개의 정수를 입력 받고 저장  
    for (int i = 0; i < 5; i++)
    {
        lst.push_back(i);
    }
    // 기본 방향으로 출력
    cout << "기본 방향" << endl;
    list<int>::iterator iter1;
    for (iter1 = lst.begin(); iter1 != lst.end(); iter1++)
    {
        cout << *iter1 << "  ";
    }
    cout << endl;

    //cout << lst[2] << "  ";
    //cout << lst.at(2) << "  ";
    iter1 = lst.begin();
    cout << *iter1++ << "\n";
    cout << *iter1 << "  ";
    return 0;
}