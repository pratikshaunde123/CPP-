#include<iostream>
using namespace std;
main()
{
	try
	{
		int choice;
		cout<<"\nEnter the choic:";
		cin>>choice;
		
		if(choice==1)
		throw 10;
		
		else if(choice==2)
		throw 3.14;
		
		else
		throw "\nUnknown choice";
		
	}
	catch(int x)
	{
	cout<<"\nInteger exception:"<<x;
}
	catch(double x)
	{
	cout<<"\nDouble exception:"<<x;
}
	catch(const char *x)
	{
	cout<<"\nString exception:"<<x;
}
}