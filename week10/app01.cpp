#include "dynamicarray.h"

int main()
{
    DynamicArray da1(5);

    da1.setAt(100, 3);
    cout << da1.getAt(3) << '\n';

    return 0;
}
