#include<iostream>
#include<string>

using namespace std;

class DayOfYear {
    private:
    int d;

    public:
    static int days_end[ ];
    static string mon_name[ ];
    void show();
    void show_day( ) {
        cout<<"The output is: "<< d <<endl;
    }
    void set_day(int d) {
        this->d = d;
    }

    DayOfYear(string name_month, int day_mon);

    DayOfYear() { };
    DayOfYear operator++(int);
    DayOfYear operator++( );
    DayOfYear operator--(int);
    DayOfYear operator--();
};

int DayOfYear::days_end[] = { 31, 59, 90,120, 151, 181,212, 243, 273,304, 334, 365 };
string DayOfYear::mon_name[]= { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };

DayOfYear::DayOfYear(string name_month, int day_month) {
    bool err = false;

    for (int m = 0; m < 12; m++) {
        if (name_month == mon_name[m]) {
            if (m  == 0) {
                d = day_month;
                err = day_month< 0 || day_month>= 32 ;
                if (err) break;
                } else {
                    d = day_month + days_end[m-1];
                    err = day_month< 0 || day_month>days_end[m]  - days_end[m-1];
                    if (err) break;
                    }
                    return;
        };
    };

cout<<"Incorrect  name or day of month";
exit(1);
}
void DayOfYear::show() {
    int mon = 0;
    while (days_end[mon] < d) {
    mon = (mon + 1) % 12;
    }
    if (mon == 0) {
        cout<<"\nJanuary "<< d <<endl<<endl;
    } else {
        cout<<endl<<mon_name[mon] <<" "<< d - days_end[mon-1] <<endl<<endl;
    }
}

DayOfYear DayOfYear::operator++(int) {
    DayOfYear t = *this;
    d ++;
    if (d == 366) {
        d = 1;
    }
        return t;
}

DayOfYear DayOfYear::operator--(int) {
    DayOfYear t = *this;
    d --;
    if (d == 0) {
        d = 365;
    }
        return t;
}

DayOfYear DayOfYear::operator++() {
    d ++;
    if (d == 366) {
        d = 1;
    }
    return *this;
}

DayOfYear DayOfYear::operator--() {
    d --;
    if (d == 0) {
        d = 365;
    }
    return *this;
}

int main() {
    string mon;
    int d;
    cout<<"\nEnter month and day (Example: February 1):  ";
    cin>>  mon >> d;

    DayOfYear dy(mon, d);
    dy.show_day();
    --dy;
    cout<<"The day before an input day is ";
    dy.show();
    dy ++; dy ++;
    cout<<"The day after an input day is ";
    dy.show();
    return 0;

}