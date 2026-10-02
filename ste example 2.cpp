#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> q;

    q.push_back(10);
    q.push_back(20);
    q.push_back(30);
 
 cout<<"\nElements:";
 
    for(int x : q)
    {
        cout << x << " ";
    }

    return 0;
}