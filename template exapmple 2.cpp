#include<iostream>
using namespace std;

template<typename T,typename U>
void display(T a,U b)
{
	cout<<"First value"<<a<<endl;
	cout<<"\nSecond value"<<b<<endl;
}
int main()
{
	display(10,20.3);
		return 0;
}