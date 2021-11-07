/*
Name: Chang Yeon Hong
Date: 09/17/2021
Program Name: Running the Race
*/

#include <iostream>
using namespace std;

int main()
{

const int HUNDRED = 100, MIN_NUM = 0, STORE_COUNT = 3;
int store1, store2, store3, store1_count, store2_count, store3_count;


cout << "Enter today's sales for for store 1: " ;
cin >> store1;
store1_count = store1 / HUNDRED;

cout << "Enter today's sales for for store 2: " ;
cin >> store2; 
store2_count = store2 / HUNDRED;

cout << "Enter today's sales for for store 3: " ;
cin >> store3; 
store3_count = store3 / HUNDRED;

cout << endl;

cout << "DAILY SALES" << endl;
cout << "(each * = $100)" << endl;

//Store 1 
cout << "Store 1: ";
for (int i = MIN_NUM; i < store1_count; i++) {

    cout << "*";

}

cout << endl;

//Store 2
cout << "Store 2: ";
for (int i = MIN_NUM; i < store2_count; i++) {

    cout << "*";

}

cout << endl;

//Store 3
cout << "Store 3: ";
for (int i = MIN_NUM; i < store3_count; i++) {

    cout << "*";

}

cout << endl;


}





