#include<iostream>
using namespace std;
int main()
{
	int number=1,beverages_num,count, total=0,total1=0,total2=0,total3=0,total4=0;
	cout << "Menu for beverages: ";
	cout << " \n1. Coffee 2. Tea  3. Coke 4. Orange Juice\n";
	cout << "Please input the favorite beverage of person # "<<number;
	cout <<"\n Choose 1, 2, 3, or 4 from the above menu or -1 to exit the program\n";
	cin >> beverages_num;
	while(number != -1)
	{
	total = total + number;
	number ++;
		cout << "\nPlease input the favorite beverage of person # "<<number;
	cout <<"\n  Choose 1, 2, 3, or 4 from the above menu or -1 to exit the program\n";
	cin >> beverages_num;	
}
cout << " \nThe total number of people surveyed is "<<total<< "The results are as follows: Beverage";
		switch(beverages_num)
	{
	case 1 : total1 = total1 + beverages_num;
		     cout << "Coffee" <<  total1 ;
	case 2 : total2 = total2 + beverages_num;
			cout << "Tea" <<  total2 ;
	case 3 : total3 = total3 + beverages_num;
			cout << "Coke" <<  total3 ;
	case 4 : total4 = total4 + beverages_num;	
	 cout <<"Orange Juice" <<  total4 ;
	default: cout << "invalid choice , please try again";
	}
}
	


