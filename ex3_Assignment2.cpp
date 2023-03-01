/*Exercise 3. Write a program to check whether number N is an even or odd number?*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter N:";
    cin>>n;
    if(n %2 == 0)
    {
        cout<<"Even";
    }
    else
    {
        cout<<"Odd";
    }
    return 0;
}