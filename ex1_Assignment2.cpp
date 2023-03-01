/*Exercise 1. Write a C++ program to integral quotient and remainder of a division
Example: 
 Input numerator: 2500                                                 
 Input denominator: 235                                                
 Output: quotient = 10, remainder = 150    
*/
#include<iostream>
using namespace std;
int main()
{
    int numerator, denominator;
    cout<<"numerator:";
    cin>>numerator;
    cout<<"denominator:";
    cin>>denominator;
    int quotient, remainder;
    // variable to store quotient and remainder 
    quotient = numerator / denominator;
    remainder = numerator % denominator;
    cout<<"quotient: "<<quotient<<endl;
    cout<<"remainder: "<<remainder<<endl;

   
    return 0;
}