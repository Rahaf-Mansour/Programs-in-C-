#include<iostream>
using namespace std;
int main ()
{
	int var;
	void showVar();
	int main() 
{ 

for (int count = 0; count < 10; count++) 
showVar(); 
return 0;
 } 


 //II Definition of function showVar 
 void showVar()
  { static int var = 10; 
 
cout << var << endl;
 var++; 
	
	
}
