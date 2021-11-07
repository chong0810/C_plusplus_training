/*
Name: Chang Yeon Hong
Date: 09/02/2021
Program Name: Geometry Calculator
*/

#include <iostream>
#include <cmath>     // Needed for the pow function
using namespace std;

int main()
{
int userInput;
float area;
string validation;

cout << "Geometry Calculator" << endl;
cout << "1. Calculate the Area of a Circle" << endl;
cout << "2. Calculate the Area of a Rectangle" << endl;
cout << "3. Calculate the Area of a Triangle" << endl;
cout << "4. Quit" << endl;
cout << "Enter your choice (1–4):" << endl;

cin >> userInput;


switch (userInput)
{
    case 1:
    
    float radius;
    cout << "What is the radius of the circle?" << endl;
    cin  >> radius;

    if (radius < 0 || cin.fail()) {
        cout << "Invalid input. Exiting program." << endl;
        

    } else {

    // Compute and display the area
        area = 3.14159 * pow(radius, 2);
        cout << "The area is " << area << endl;
        return 0;
        }

    break;

    case 2:

        float width, length;
        cout << "What is the length of the rectangle?" << endl;
        cin  >> length;

        if (length < 0 || cin.fail()) {
        cout << "Invalid input. Exiting program." << endl;
        
        } else {

        cout << "What is the width of the rectangle?" << endl;
        cin  >> width;
        if (width < 0 || cin.fail()) {
        cout << "Invalid input. Exiting program." << endl;
        
        
        } else {
        // Compute and display the area
        area = width * length;
        cout << "The area is " << area << endl;
        return 0;
        
        }        
        }

        break;

    case 3:
    
        float base, height;
        cout << "What is the height of the triangle?" << endl;
        cin  >> height;

        if (height < 0 || cin.fail()) {
        cout << "Invalid input. Exiting program." << endl;
        break;

        } else {

        cout << "What is the base of the triangle?" << endl;
        cin  >> base;
            if (base < 0 || cin.fail()) {
        cout << "Invalid input. Exiting program." << endl;
        break;
        
        } else {
        // Compute and display the area
        area = base * height / 2.0;
        cout << "The area is " << area << endl;
        return 0;
        break;
        }        
        }

    case 4:
        cout << "Exiting the program." << endl;
        break;

    default:
        cout << "Invalid input exiting the program." << endl;
        break;

    }
}





