// Q1 d. part program



#include<iostream>
#include<conio.h>
using namespace std;
void ansA (float a1,float b1,float x1,float y1,float c1)
{
	float A;
	A = (7.7*b1*(x1*y1+a1)/c1-0.8+2*b1)/((x1+a1)*(1/y1));
	cout<<" Value of A = "<<A;
}
int main()
{
	float a,b,c,x,y;
	cout<<"Enter the value of 'x' = ";
	cin>>x;
	cout<<"Enter the value of 'y' = ";
	cin>>y;
	cout<<"Enter the value of 'a' = ";
	cin>>a;
	cout<<"Enter the value of 'c' = ";
	cin>>c;
	cout<<"Enter the value of 'b' = ";
	cin>>b;	
	ansA(a,b,x,y,c);
	getch();
	return 0;

}

