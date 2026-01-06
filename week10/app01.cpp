#include "dynamicarray.h"

int main()
{
    DynamicArray da1(5);

    da1.setAt(100, 3);
    cout << da1.getAt(3) << '\n';
    cout << da1.getAt(9) << '\n';  // out of heap memory scope
    da1.setAt(-99, 7);  // out of heap memory scope

    return 0;
}
