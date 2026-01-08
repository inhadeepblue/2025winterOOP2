#include <iostream>
using namespace std;


int factorial_loop(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result = result * i;
    }
    return result;
}
// 4! = 4 * 3 * 2 * 1
// 4! = 4 * 3!
// 4! = 4 * (4-1)!
// (4-1)! = 3 * (3-1)!
int factorial_recursion(int n) {
    if (n == 1)
        return 1;
    return n * factorial_recursion(n-1);
}
int main()
{
    int number = 0;
    cin >> number;

    cout << factorial_loop(number) << '\n';
    cout << factorial_recursion(number) << '\n';
    return 0;
}