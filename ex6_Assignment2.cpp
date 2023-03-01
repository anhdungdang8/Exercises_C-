/*Exercise 6. Write a program to print out the fibonacci numbers (first 100 numbers): 1 1 2 3 5 8 13 21 34 ...*/
#include <iostream>
using namespace std;

int main()
{
    unsigned long long int a,b,c;
    a=1;b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=3;i<=100;i++)
    {
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }

    return 0;
}
