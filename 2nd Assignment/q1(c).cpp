// Q1 c. part program

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

#include<iostream>
#include<conio.h>
using namespace std;
float ansR(float,float,float,float);
int main()
{
	float v,d,c,g;
	cout<<"Enter the value of 'v' = ";
	cin>>v;
	cout<<"Enter the value of 'c' = ";
	cin>>c;
	cout<<"Enter the value of 'd' = ";
	cin>>d;
	cout<<"Enter the value of 'g' = ";
	cin>>g;	
	cout<<"\n\n Value of R = "<<ansR(v,d,c,g);
	getch();
	return 0;

}
float ansR(float v1,float d1,float c1,float g1)
{
	float R;
	R = (2*v1+6.22*(c1+d1))/((g1+v1));
	return R;
}
