
#include <iostream>
#include <iomanip>
using namespace std;



int main()

{
int	quantity;	// contains the amount of items purchased float itemPrice;	// contains the price of each item
float totalBill;	// contains the total bill.
float itemPrice;


cout << setprecision(2) << fixed << showpoint;	// formatted output cout << "Please input the number of items bought" << endl;

cin>>quantity;


cout<<"\nEnter the price of these item ";


cin>>itemPrice;

totalBill = quantity*itemPrice;

cout<<"Totat bill is:"<<totalBill<<endl;


return 0;
}

