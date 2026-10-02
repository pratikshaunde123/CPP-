#include<iostream>
using namespace std;

template<typename T>
class Box
{
private:
    T value;

public:
    void setValue(T v)
    {
        value = v;
    }

    void display()
    {
        cout << "Value = " << value;
    }
};

int main()
{
    Box<int> B;

    B.setValue(100);

    B.display();

    return 0;
}