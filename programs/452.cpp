#include <iostream>
using namespace std;

void swap(float& , float& );

int main()

{

        float first;
        float second;
   
        //prompt user to enter the numbers
        cout << "Enter the first number." << endl;
        cout << "Then hit enter." << endl;
        cin >> first;
        cout << "Enter the second number." << endl;
        cout << "Then hit enter." << endl;
        cin >> second;
   
        cout << endl << "You input the numbers as " << first << " and "
         << second << endl;
   
        swap(first,second); // call to swap function  
        
        //Output the values
   cout << "After swapping, the first number has the value of " << first
        << " which was the value of the second number." << endl
        << "The second number has the value of " << second
        << " which was the value of the first number." << endl;

        return 0;

}
void swap(float& number1 , float& number2)
{
    float number3;
	number3 = number1;
	number1 = number2;
	number2 = number3;
}
//**********************************************************************
//                          swap
//
// task:     to swap two numbers
// data in:  two numbers to swap
// data out: the two numbers received with their values swapped
//
//***********************************************************************

// Write the function swap here
