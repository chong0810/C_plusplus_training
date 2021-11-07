/*
Name: Chang Yeon Hong
Date: 09/10/2021
Program Name: Running the Race
*/

#include <iostream>
using namespace std;

int main()
{

string name1, name2, name3;
int time1, time2, time3;
bool should_continue = false;


cout << "Running the Race" << endl;

cout << "What is the name of the first runner? ";
cin >> name1;

cout << "How many minutes did the person to take to finish the race? ";
cin >> time1;

if (time1 < 1 || cin.fail()) {

    cout << "Wrong input. Exiting the program.";

} else {

    cout << "What is the name of the second runner? ";
    cin >> name2;

    

    cout << "How many minutes did the person to take to finish the race? ";
    cin >> time2;
    
    if (time2 < 1 || cin.fail()) {

        cout << "Wrong input. Exiting the program.";
    } else {

        cout << "What is the name of the third runner? ";
        cin >> name3;

        cout << "How many minutes did the person to take to finish the race? ";
        cin >> time3;

        if (time3 < 1 || cin.fail()) {
            cout << "Wrong input. Exiting the program.";
        } else {
            should_continue = true;
        }
    }


}

if (should_continue == true) {

    if (time1 < time2 && time1 < time3) {
        cout << name1 << " came in first with " << time1 << " minutes." << endl;

        if (time2 < time3) {
            cout << name2 << " came in second with " << time2 << " minutes." << endl;

            cout << name3 << " came in third with " << time3 << " minutes." << endl;

        } else {
            cout << name3 << " came in second with " << time3 << " minutes." << endl;

            cout << name2 << " came in third with " << time2 << " minutes." << endl;
        }



    } else if (time2 < time1 && time2 < time3) {

        cout << name2 << " came in first with " << time2 << " minutes." << endl;

        if (time1 < time3) {
            cout << name1 << " came in second with " << time1 << " minutes." << endl;

            cout << name3 << " came in third with " << time3 << " minutes." << endl;

        } else {
            cout << name3 << " came in second with " << time3 << " minutes." << endl;

            cout << name1 << " came in third with " << time1 << " minutes." << endl;
        }

    } else {
        
        cout << name3 << " came in first with " << time3 << " minutes." << endl;

        if (time1 < time2) {
            cout << name1 << " came in second with " << time1 << " minutes." << endl;

            cout << name2 << " came in third with " << time2 << " minutes." << endl;

        } else {
            cout << name2 << " came in second with " << time2 << " minutes." << endl;

            cout << name1 << " came in third with " << time1 << " minutes." << endl;
        }

    }
}






}





