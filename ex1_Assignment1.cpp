/*Exercise 1: Add the correct data type for the following variables:
___ myNum = 1;
___ myNum1 = 10001;
___ myNum2 = 100000001;
___ myNum3 = 10000000000001;
___ myNum4 = -10000000000001;
___ myDoubleNum = 1.001;
___ myDoubleNum1 = 100000000000001.100001;
___ myDoubleNum2 = -1000000001.100001;
___ myLetter = 'A';
___ myLetter1 = "c";
___ myText = "Hello World";
___ myBool = false;
*/
#include<iostream>
using namespace std;
int main()
{
    int myNum = 1;//size of the myNum = 4 byte
    int myNum1 = 10001;//size of the myNum1 = 4 byte
    unsigned int myNum2 = 100000001;//size of the myNum2 = 4 byte
    long long int myNum3 = 10000000000001;//size of the myNum3 = 8 byte
    long long int myNum4 = -10000000000001;//size of the myNum4 = 8 byte
    double myDoubleNum = 1.001;//size of the myDoubleNum = 8 byte
    double myDoubleNum1 = 100000000000001.100001;//size of the myDoubleNum1 = 8 byte
    double myDoubleNum2 = -1000000001.100001;//size of the myDoubleNum2 = 8 byte
    char myLetter = 'A';//size of the myLetter = 1 byte
    string myLetter1 = "c";//size of the myLetter1 = 24 byte
    string myText = "Hello World";//size of the myText = 24 byte
    bool myBool = false;//size of the myBool = 1 byte
    
    cout << "myNum = " << myNum << endl;
    cout << "myNum1 = " << myNum1 << endl;
    cout << "myNum2 = " << myNum2 << endl;
    cout << "myNum3 = " << myNum3 << endl;
    cout << "myNum4 = " << myNum4 << endl;
    cout << "myDoubleNum = " << myDoubleNum << endl;
    cout << "myDoubleNum1 = " << myDoubleNum1 << endl;
    cout << "myDoubleNum2 = " << myDoubleNum2 << endl;
    cout << "myLetter = " << myLetter << endl;
    cout << "myLetter1 = " << myLetter1<<endl;
    cout << "myText = " << myText << endl;
    cout << "myBool = " << myBool << endl;
    
    cout << "size of myNum = " << sizeof(myNum) << endl;
    cout << "size of myNum1 = " << sizeof(myNum1) << endl;
    cout << "size of myNum2 = " << sizeof(myNum2) << endl;
    cout << "size of myNum3 = " << sizeof(myNum3) << endl;
    cout << "size of myNum4 = " << sizeof(myNum4) << endl;
    cout << "size of myDoubleNum = " <<sizeof(myDoubleNum) << endl;
    cout << "size of myDoubleNum1 = " <<sizeof(myDoubleNum1) << endl;
    cout << "size of myDoubleNum2 = " <<sizeof(myDoubleNum2) << endl;
    cout << "size of myLetter = " <<sizeof(myLetter) << endl;
    cout << "size of myLetter1 = " <<sizeof(myLetter1) << endl;
    cout << "size of myText = "<<sizeof(myText) << endl;
    cout << "size of myBool = " <<sizeof(myBool) << endl;
    
    return 0;


    return 0;
}