// This program calculates and displays the area of a rectangle.
#include <iostream>
using namespace std;

int main()
{

    double rent, utilities, phone, internet, monthly_total, yearly_total;

    cout << "What is the monthly rent?"<< endl;
   	cin >> rent;

    cout << "What is the monthly utilities cost?"<< endl;
    cin >> utilities;

    cout << "What is the monthly phone cost?"<< endl;
    cin >> phone;

    cout << "what is the monthly internet cost?"<< endl;
    cin >> internet;

    monthly_total = rent + utilities + phone + internet;

    cout << "Monthly Cost is : $" << monthly_total << endl;
    
    yearly_total = monthly_total * 12;
    cout << "Yearly Cost is : $" << yearly_total << endl;


	return 0;
}
