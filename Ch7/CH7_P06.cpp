#include <iostream> 
#include <iomanip>
using namespace std;

class Tips
{
private:
	double taxRate;
public:
	Tips(double rate = 0.085)
	{
		if (rate > 0)
			taxRate = rate;
		else
			taxRate = 0.085;
	}
	double computeTip(double bill, double tipRate);
	~Tips();
};


double Tips::computeTip(double bill, double tipRate)
{
	double mealCost = bill/(1 + taxRate);
	return (mealCost * tipRate);
}
Tips::~Tips()
{
}


int main()
{
	double totalBill, taxRate, tipRate;

	cout << "Enter the total bill of the meal: $";
	cin >> totalBill;
	cout << "Enter the tax rate of the city in decimals or type 0 if you do not know: ";
	cin >> taxRate;
	cout << "Enter the tip rate for the waiter or waitress in decimals: ";
	cin >> tipRate;

	Tips myTips(taxRate);
	cout << fixed << setprecision(2) << endl;
	cout << "My tip for the meal is $" << myTips.computeTip(totalBill, tipRate) << endl;
	system("pause");
	return 0;
}
