// Q1 b. part program

#include<iostream>
#include<conio.h>
using namespace std;
float ansX(float,float,float);
int main()
{
	float a,b,c;
	cout<<"Enter the value of 'a' = ";
	cin>>a;
	cout<<"Enter the value of 'b' = ";
	cin>>b;
	cout<<"Enter the value of 'c' = ";
	cin>>c;	
	cout<<" Value of X = "<<ansX(a,b,c);;
	getch();
	return 0;

}
float ansX(float a1,float b1,float c1)
{
	float X;
	X= (-b1+(b1*b1)+24*a1*c1)/(2*a1);
	return X;
}
