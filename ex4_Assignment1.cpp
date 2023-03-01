 /*Exercise 4: A marketing company wants to keep record of its employees. Each record would have the following characteristics:
•	First name
•	Last name
•	Age (0...100)
•	Gender (male or female)
•	Personal ID number (e.g. 012345678)
•	Unique employee number (00000000 -> 99999999)
Declare the variables needed to keep the information for a single employee using appropriate primitive data types. 
Use descriptive names. Print the data at the console.
*/
 #include <iostream>
 #include<string>
using namespace std;
 int main()
 {
    string firstName = "Van";
    string lastName = "Nguyen";
    int age = 29;
    string gender = "male";
    string personalID = "012345678";
    int uniqueEmployeeNumber = 11223344;

    cout<<"First name: "<<firstName<<endl;
    cout<<"Last name: "<<lastName<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Gender: "<<gender<<endl;
    cout<<"Personal ID number: "<<personalID<<endl;
    cout<<"Unique employee number: "<<uniqueEmployeeNumber<<endl;


    return 0;
 }
