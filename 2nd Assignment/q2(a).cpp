// Q2 a. part program

#include<iostream>
#include<conio.h>
using namespace std;
void distance(float);
int main()

{
	float d;
	cout<<"Enter distance between two cities (in km.) = ";
	cin>>d;
	cout<<endl<<endl;
	distance(d);
	getch();
	return 0;

}
void distance (float D)
{
	cout<<"    Distance between two cities (in meters) = "<<1000.0*D<<" m"<<endl;
	cout<<"    Distance between two cities (in feets)  = "<<3280.84*D<<" ft"<<endl;
	cout<<"    Distance between two cities (in inches) = "<<39370.1*D<<" inch"<<endl;
	cout<<"Distance between two cities (in centimetre) = "<<100000.0*D<<" cm"<<endl;
	

}
