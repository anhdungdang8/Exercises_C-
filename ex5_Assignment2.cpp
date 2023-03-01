/*Exercise 5. Write a program to solve first-order equation. ax+b=0*/
#include<iostream>
using namespace std;
int main()
{
    float a,b;
    float x;
    cout<<"Enter a: ";
    cin >> a;
    cout<<"Enter b: ";
    cin >> b;
    if(a==0 )
    {
        if(b==0)
        {
            cout<<"The equation has infinitely many solutions";
        }
       else
       {
            cout<<"The equation has no solutions";
       }
        
    }
    else
    {
        cout<<"The equation has a solution"<<endl;
        x=(-b/a);
        cout<<"x = "<<x;
    }



    return 0;
}