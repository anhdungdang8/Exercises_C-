/*Exercise 2: Declare two integer variables a and b and assign them with 5 and 10 and after that exchange their values by using some programming logic.
 Print the variable values before and after the exchange, as shown below:*/
 #include <iostream>
 using namespace std;
 int main()
 {
    int a = 5;
    int b = 10;
    cout<<"Before"<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<"After"<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    return 0;
 }