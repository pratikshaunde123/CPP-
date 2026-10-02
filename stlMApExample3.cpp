#include<iostream>
#include<map>
using namespace std;

main()
{
	map<int,string>student;
	
	student[101]="Rahul";
	student[102]="komal";
	student[103]="Lalita";
	
	cout<<"Student 101:"
		<<student[101]<<endl;
		
}