#include<iostream>
#include<string>
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
        cout << "Value = " << value << endl;
    }
};

int main()
{
    Box<int> B;
    B.setValue(100);
    B.display();

    Box<double> B1;
    B1.setValue(23.4);
    B1.display();

    Box<string> B2;
    B2.setValue("hello");
    B2.display();

    return 0;
}