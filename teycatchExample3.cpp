#include<iostream>
using namespace std;
int main()
{
	try
	{
		int choice;
		cout<<"Enter the choice:";
		cin>>choice;
		
		if(choice==1)
		{
			throw 100;
		}
		if(choice==2)
		{
			throw 'X';
		}
		if(choice==3)
		{
			throw "INvalid operation";
		}
	}
	
		catch(int x)
		{
			cout<<"\nInteger exception:"<<x;
		}
		  catch(char x)
    {
        cout << "\nCharacter exception: " << x;
    }

    catch(const char* x)
    {
        cout << "\nString exception: " << x;
    }
	}
