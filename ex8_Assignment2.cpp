/*Exercise 8. Write a program to find Greatest Common Divisor 
and Least Common Multiple of two numbers A and B enter by keyboard ( 1 <= A, B <= 10000).*/
#include<iostream>
using namespace std;
//function find Greatest Common Divisor
int findGCD(int a,int b)
{
    while(a!=b)
    {
        if(a>b)
        {
            a-=b;
        }
        else
        {
            b-=a;
        }
    }
    return a;
}
//function to find the Least Common Multiple
int findLCM(int a, int b)
{
    return ((a*b)/findGCD(a, b));

}
int main()
{
    int a,b;
    do
    {
        // Prompt user to enter a and b
        cout<<"Enter a: ";
        cin >> a;
        cout<<"Enter b: ";
        cin >> b;
        
        // Check if a and b are within valid range
        if((1>a || a>10000) || (1>b || b>10000))
        {
            // If not, prompt user to enter values within valid range
            cout<<"Enter 1<= a,b <=10000"<<endl;
        }
    } while ((1>a || a>10000) || (1>b || b>10000));

    cout<<"\nGreatest Common Divisor of a and b: "<<findGCD(a,b)<<endl;
    cout<<"Least Common Multiple of a and b: "<<findLCM(a,b)<<endl;


    return 0;
}