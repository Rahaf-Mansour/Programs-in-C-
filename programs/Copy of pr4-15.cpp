// This program illustrates what can happen when a 
// Boolean value is compared to the C++ constant true.
#include <iostream>
#include <cctype>        // Needed to use the isalpha function
using namespace std;

int main()
{
	cout << "Is '?' an alphabetic character?  " << isalpha('?') << "\n";
	cout << "Is 'X' an alphabetic character?  " << isalpha('X') << "\n";
	cout << "Is 'x' an alphabetic character?  " << isalpha('x') << "\n";
    cout << "Is '5' an isalnum character?  " << isalnum(5) << "\n";
    cout << "Is '9' an isdigit character?  " << isdigit(9) << "\n";
    cout << "Is 'a' an islower character?  " << islower('a') << "\n";
    cout << "Is ' ' an isspace character?  " << isspace(' ') << "\n";
    cout << "Is ',' an ispunct character?  " << ispunct(',') << "\n";
    cout << "Is 'A' an isupper character?  " << isupper('A') << "\n";
    cout << "Is 't' an isprint character?  " << isprint('c') << "\n\n";
	return 0;
}
