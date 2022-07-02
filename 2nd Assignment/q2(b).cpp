// Q2 b. part program


#include <iostream>
#include<conio.h>
using namespace std;
void swap(float &x,float &y)
{
	float temp;
	temp=x;
	x=y;
	y=temp;
}
int main ()
 {
   float C,D;
   cout<<"Enter the 1st Number = ";
   cin>>C;
   cout<<"Enter the 2nd Number = ";
   cin>>D;
   cout<<endl<<endl;
   cout << "Before swap, value of 1st no :" << C << endl;
   cout << "Before swap, value of 2nd no :" << D << endl;
   swap(C,D);
   cout<<endl<<endl;
   cout << "After swap, value of 1st no :" << C << endl;
   cout << "After swap, value of 2nd no :" << D << endl;
 
   return 0;
}
