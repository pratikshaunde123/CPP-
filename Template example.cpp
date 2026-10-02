#include<iostream>
using namespace std;

template<typename T>
T maximum(T a,T b)
{
	if(a>b)
	return a;
	else
	return b;
}
int main()
{
	cout<<"\nMaximum integer:"<<maximum(10,20)<<endl;
	
	cout<<"\n Maximum Float:"<<maximum(10.2,20.3)<<endl;

	cout<<"\n Maximum Character:"<<maximum('A','D')<<endl;
	
		return 0;
}