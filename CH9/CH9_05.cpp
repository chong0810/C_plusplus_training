#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Data
{
	int Date; 				
	double Ins;				

};


void getData(string &, int &, int &, Data[], int);
void bubbleSort(Data[], int);
void displayData(string, int, int, Data[], int);

int main()
{	
	const int Days = 7;
	Data Wk[Days];

	string Mth; 			
	int Start,				
		End;				

	getData(Mth, Start, End, Wk, Days);

	bubbleSort(Wk, Days);

	displayData(Mth, Start, End, Wk, Days);

	cout << endl;


	return 0;
}


void getData(string &Mth, int &Start, int &End, Data Wk[], int Days)
{

	cout << "Input the following information for\n"
		 << "the seven-day period being measured.\n";
	cout << "Enter the name of the month: ";
	cin  >> Mth;
	cout << "Enter the starting date: ";
	cin  >> Start;
	cout << "Enter the ending date: ";
	cin  >> End;

	for (int i = 0; i < Days; i++)
	{   
		Wk[i].Date = Start + i;
        
		
	}

	double Input;
	cout << "Enter the base show depths for each day.\n";
	for (int i = 0; i < Days; i++)
	{
		cout << Wk[i].Date << " of " << Mth << ": ";
		cin  >> Input;
		Wk[i].Ins = Input;
	}
}


void displayData(string Mth, int Start, int End, Data Wk[], int Days)
{
	cout << "Snow Report " << Mth << " " << Start << " - " << End << endl;
	cout << "   Date   Base\n";
	cout << fixed << showpoint << setprecision(1);

	for (int i = 0; i < Days; i++)
	{
		cout << "    " << Wk[i].Date << "    " << Wk[i].Ins << endl;
	}
}


void bubbleSort(Data array[], int size)
{
	Data temp;				
	bool swap;

	do
	{	swap = false;
		for (int count = 0; count < (size - 1); count++)
		{
			if (array[count].Ins > array[count + 1].Ins)
			{
				temp = array[count];
				array[count] = array[count + 1];
				array[count + 1] = temp;
				swap = true; 
			}
		}
	} while (swap);
}