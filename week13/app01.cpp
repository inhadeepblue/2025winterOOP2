#include <vector>
#include <iostream>
#include <iomanip>  // setw
using namespace std;

int main()
{
    vector<int> vec(10, 0);    
    vector<int>::iterator it;

    for (int i = 0; i < 9; i++)
    {
        vec[i] = i * 2;
    }
    vec.insert(vec.begin()+1, 111);
    //vec.pop_back();
    //vec.clear();
    vec.erase(vec.begin() + 3);
    for (it = vec.begin(); it != vec.end(); ++it)
    {
        cout << setw(3) << *it;
    }
    cout << endl;

    return 0;
}