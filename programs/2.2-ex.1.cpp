#include <iostream>
using namespace std;


const double PI = 3.14;
const double RADIUS = 5.4;


int main()

{
	
	float circumference,area;
	
	 circumference = 2 * PI * RADIUS;
	 area = RADIUS * RADIUS * PI;
	 
	 cout<<"The circumference of the circle is "<<circumference<<endl;
	 
	cout<<"   The area of the circle is "<<area<<endl;
	
	return 0;
	
}
