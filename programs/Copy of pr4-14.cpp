// This program determines whether or not an applicant 
// qualifies for a loan. It uses the ! logical operator 
// to reverse the logic of the if statement.
#include <iostream>
using namespace std;

int main()
{
    const double MIN_INCOME = 35000.0;
    const int MIN_YEARS = 5;
	
	double income;      // Annual income
	int years;          // Years at the current job

	// Get annual income and years on the job 
	cout << "What is your annual income? ";
	cin  >> income; // 50000
	cout << "How many years have you worked at your current job? ";
	cin  >> years; // 25

	// Determine if the applicant qualifies for a loan
	if ( !(income >= MIN_INCOME || years > MIN_YEARS) )    // Uses logical NOT
	{	cout << "\nYou must earn at least $" << MIN_INCOME 
	         << " or have been employed \n"
			 << "for more than " << MIN_YEARS << " years "
			 << "to qualify for a loan. \n";
	}
	else
		cout << "You qualify for a loan.\n";
	return 0;
}
