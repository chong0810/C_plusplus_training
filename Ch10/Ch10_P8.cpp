#include <iostream>

using namespace std;

int days(int *month, int *year) //getting value at the address using pointers
{
int noOfDays = 0;
switch(*month)
{

case 1: case 3: case 5: case 7: case 8: case 10: case 12:
noOfDays = 31;
break;

case 2:
if(*year%400 == 0 || *year%4 == 0 && *year%100 != 0) //checking conditions for 2nd month
noOfDays = 29;
else
noOfDays = 28;
break;

case 4: case 6: case 9: case 11:
noOfDays = 30;
break;

default: 
break;
}
return noOfDays;
}

int main(){
int month, year;
cout << "Enter integer for month: "; //getting input from user
cin >> month;
cout << "\nEnter integer for year: ";
cin >> year;
if (month < 13 && month > 1) {
cout << "\nNumber of Days in month = " << month << " and year = " << year << " are: " << days(&month, &year) << "\n.";
} else if (month == 0) {
    cout << "Exiting Program.";
} else {
    cout << "Please try again with valid input";
}
return 0;
}