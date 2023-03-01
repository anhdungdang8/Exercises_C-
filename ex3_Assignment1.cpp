 /*Exercise 3: Create a file to enter two integer numbers and output to screen of console: sum and difference of two numbers.*/
 #include <iostream>
 using namespace std;
 int main()
 {
    int num1;
    int num2;
    cout<<"Enter num1: ";
    cin >> num1;
    cout<<"Enter num2: ";
    cin >> num2;
    int sum = 0;
    int diff = 0;
    sum = num1 + num2;
    diff = num1 - num2;
    cout<<"Sum of two numbers = "<<sum<<endl;
    cout<<"Difference of two numbers = "<<diff<<endl;
    
    return 0;

 }