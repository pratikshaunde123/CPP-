#include<iostream>
using namespace std;
class base
{
	public :
		virtual void show()
		{
		 cout<<"\nBase class show function";	
		}
		virtual void display()
		{
			cout<<"\nBase class Display Function";
		}
};
class derive:public base
{
	void show()
	{
		cout<<"\nDerived class show function";
	}
	void display()
	{
		cout<<"\nDerived Class Display Function";
	}
};
int main()
{
	base obj,*bptr;
	derive obj2;
	
	bptr=&base;
	obj->show();
	obj->display();
	
	bptr=&drived;
	obj->show();
	obj->display();
	return 0;
}