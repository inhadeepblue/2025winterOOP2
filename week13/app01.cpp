#include <vector>
#include <iostream>
#include <iomanip>  // setw
using namespace std;

int main()
{
    //vector<int> vec(10);
    vector<int> vec;

    for (int i = 0; i < 10; i++)
    {
        //vec.at(i) = i * 2;
        //vec[i] = i * 2;
        vec.push_back(i * 2);
        //vec.push_front(i * 2);  // not exist
    }
    
    for (auto iter = vec.begin(); iter != vec.end(); ++iter)
    {
        cout << setw(3) << *iter;
    }
    cout << endl;

    for (auto rIter = vec.rbegin(); rIter != vec.rend(); ++rIter)
    {
        cout << setw(3) << *rIter;
    }
    cout << endl;
    return 0;
}