// Q1 a. part program

#include<iostream>
#include<conio.h>
using namespace std;
float ansZ(float,float,float,float,float,float);
int main()
{
	float a,b,c,q,r,m,z;
	cout<<"Enter the value of 'a' = ";
	cin>>a;
	cout<<"Enter the value of 'b' = ";
	cin>>b;
	cout<<"Enter the value of 'c' = ";
	cin>>c;
	cout<<"Enter the value of 'q' = ";
	cin>>q;
	cout<<"Enter the value of 'r' = ";
	cin>>r;
	cout<<"Enter the value of 'm' = ";
	cin>>m;		
	cout<<" Value of z = "<<ansZ(a,b,c,q,r,m);
	cout<<endl;
    system("pause");
	return 0;

}
float ansZ(float a2,float b2,float c2,float q2,float r2,float m2)
{
	float z;
	z = (8.8*(a2+b2)*2/c2-0.5+2*a2/(q2+r2))/((a2+b2)*(1/m2));

	return z;
}
