/*Exercise 2. Write a program to check whether number N is a prime number or not (1 < N < 10000)?*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    

    do
    {
    cout<<"N: ";
    cin>>n;
    if(n<1 ||n>1000)
    {
        cout<<"Enter n again (1 < N < 10000): "<<endl;
    }
    } while (n<1 ||n>1000);
    if(n<2)
    {
        cout<<"N is not prime number!";
    }
    else if(n==2)
    {
        cout<<"N is prime number!";
        
    }
    // else 
    // {
    //         for(int i=2;i<n;i++)
    //         {
    //             if(n%i==0)
    //             {
    //                 cout<<"Not";
    //                 break;
    //             }
    //             else
    //             {
    //                 cout<<"N is prime number!";
    //                 break;
    //             }
    //         }
    // }

    //flag technique
    else
    {
        bool check = true;
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
            {
                check=false;
                break;
            }
        }
         if(check)
       {
            cout<<"N is prime number!"<<endl;
       }
        else
       {
           cout<<"N is not prime number!"<<endl;
       }
        
    }


    return 0;
}