#include<iostream>
using namespace std;
main()
{
	try
	{
		int age=55;
		if(age<18)
		throw age;
		
	  cout<<"\nYou are eligible to vote";
		cout<<"\nEnd of try";
	}
	catch(int x)
	{
		cout<<"\nException:age is less than 18";
	}
}