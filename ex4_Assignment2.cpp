/*Exercise 4. Write a program to change value of two integer number A and B enter by keyboard.*/
#include<iostream>
using namespace std;
int main()
{
    int A,B;
    cout<<"Enter A: ";
    cin>>A;
    cout<<"Enter B: ";
    cin>>B;
    int temp;
    temp = A;
    A = B;
    B = temp;
    cout<<"A: "<<A<<"\nB: "<<B;

    return 0;
}