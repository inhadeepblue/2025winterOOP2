#include <iostream>
#include <fstream>
#include <cassert>
using namespace std;

int main()
{
    char ch;
    ifstream week12("week12.txt");
    if (!week12.is_open())
    {
        cout << "week12.txt 파일을 열 수 없습니다." << endl;
        assert(false);
    }
    while (week12.get(ch))
    {
        cout.put(ch);
    }
    week12.close();
    return 0;
}