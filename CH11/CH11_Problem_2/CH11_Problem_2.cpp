#include <iostream>

using namespace std;



class DayOfYear
{
private:
    int noOfDays;
    int monthDay;
    string monthName;

public:
    DayOfYear(int noOfDays)
    {
        this->noOfDays = noOfDays;
    }

    void findMonthDay()
    {
        int monDays[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        const char *months[] = {"January", "February", "March", "April", "May", "June", "July",

                                "August", "September", "October", "November", "December"};
        int i = 0;
        int n;
        n = noOfDays;
        while (n > monDays[i])
        {
            n -= monDays[i];
            i++;
        }
        monthName = months[i];
        monthDay = n;
    }
    void print()
    {
        findMonthDay();
        cout << "Day " << noOfDays << " would be " << monthName << " " << monthDay << endl;
    }
};

int main()

{
    int dayOfTheYear;
    cout << "Enter day of the year :";

    cin >> dayOfTheYear;
    DayOfYear doy(dayOfTheYear);
    doy.print();

    return 0;
}