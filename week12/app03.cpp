#include <iostream>
#include <fstream>
#include <cassert>
using namespace std;

int main()
{
    char ch;
    ifstream original("week12.txt", ios::in);
    ofstream copy("week12_backup.txt", ios::out);
    if (!original.is_open())
    {
        cout << "week12.txt 을 열 수 없습니다." << endl;
        assert(false);
    }
    if (!copy.is_open())
    {
        cout << "week12_backup 을 열 수 없습니다." << endl;
        assert(false);
    }
    while (original.get(ch))
    {
        copy.put(ch);
    }
    original.close();
    copy.close();
    return 0;
}