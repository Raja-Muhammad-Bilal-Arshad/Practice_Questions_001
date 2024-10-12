//6. Write a program that calculates the discounted price of an item. The user provides the
// oiginal price and the discount percentage. Display the final price after discount.

#include <iostream>
using namespace std;
int main()
{
float O_P,D_P,F_A;
cout<<"Enter your Original Price";
cin>>O_P;
cout<<"Enter your Discouted percentages:";
cin>>D_P;
F_A= O_P -(D_P/100*O_P);
cout<<"Your final price is: " <<F_A;
system("pause>0");
return 0;
}