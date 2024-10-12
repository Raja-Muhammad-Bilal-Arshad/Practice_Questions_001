//5. Write a program that converts temperature from Celsius (?) to Fahrenheit (?) using the
//formula F = (C * 9/5) + 32.

#include <iostream>
using namespace std;
int main()
{
float C;
cout<<"Enter your Temperature in Celcius: ";
cin>>C;
cout<<"Your Temperature in Fahrenheit: "<< (C* 9/5) + 32;
system("pause>0");
return 0;
}