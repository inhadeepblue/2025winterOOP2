#include <iostream>
#include <cassert>
using namespace std;

template <typename T>
class Stack
{
private:
    T* ptr;
    int capacity;
    int size;
public:
    Stack(int capacity);
    ~Stack();
    void push(const T& element);
    T pop();
};
template<typename T>
Stack<T>::Stack(int cap)
    : capacity(cap), size(0)
{
    ptr = new T[capacity];
}
template<typename T>
Stack<T>::~Stack()
{
    delete[] ptr;
}
template<typename T>
void Stack<T>::push(const T& element)
{
    if (size < capacity)
    {
        ptr[size] = element;
        size++;
    }
    else
    {
        cout << "스택이 꽉 차서 삽입할 수 없습니다." << endl;
        assert(false);
    }
}
template<typename T>
T Stack<T>::pop()
{
    if (size > 0)
    {
        T temp = ptr[size - 1];
        size--;
        return temp;
    }
    else
    {
        cout << "스택이 비어서 삭제할 수 없습니다." << endl;
        assert(false);
    }
}
class Pokemon {
public:
    int hp;
    Pokemon() :hp(1) {};
    Pokemon(int hp) : hp(hp) {};
};
ostream& operator<<(ostream& o, const Pokemon& pokemon) {
    o << pokemon.hp << '\n';
    return o;
}
int main()
{
    Pokemon pikachu(100);
    Pokemon squirtle(120);
    Stack<int> stack(3);
    Stack<Pokemon> jiwoo(4);
    jiwoo.push(squirtle);
    jiwoo.push(pikachu);
    stack.push(7);
    stack.push(3);
    cout << stack.pop() << '\n';
    //cout << stack.pop() << '\n';
    //cout << stack.pop() << '\n';
    cout << stack.pop() << '\n';
    cout << jiwoo.pop() << '\n';
    return 0;
}