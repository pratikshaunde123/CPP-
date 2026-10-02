#include<iostream>
using namespace std;
main()
{
	int marks;
	cout<<"Enter marks:";
	cin>>marks;
	try
	{

		if(marks<0||marks>100)
		throw marks;
		
	 cout<<"\nvalid marks";
	}
	catch(int x)
	{
		cout<<"\nInvalid marks"<<x;
	}
}