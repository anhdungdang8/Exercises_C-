/*Exercise 6. Write a program to print out the fibonacci numbers (first 100 numbers): 1 1 2 3 5 8 13 21 34 ...*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    do 
    {
        cout << "Enter a number: ";
        cin >> n;
        if(n<1||n>100)
        {
            cout<<"Enter again (1<=N<=100):"<<endl;
        }
    }
    while(n<1||n>100);
    unsigned long long int a,b,c;
    a=1;b=1;

    for(int i=3;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
        if(n==1||n==2)
    {
        c=1;
    }
    cout<<n<<"th number in the Fibonacci sequence: "<<c;
    return 0;
}
