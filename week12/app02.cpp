#include <iostream>
#include <fstream>
#include <cassert>
using namespace std;

int main()
{
    ofstream week12;
    week12.open("week12.txt");
    if (!week12.is_open())
    {
        cout << "week12.txt 파일을 열 수 없습니다.";
        assert(false);
    }
    for (int i = 1; i <= 10; i++)
    {
        week12 << i * i<< "  ";
    }
    week12.close();
    return 0;
}