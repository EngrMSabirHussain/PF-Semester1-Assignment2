// Q3  program 



#include <iostream>
#include<conio.h>
using namespace std;
void overtimePay(void)
{
	int ovt[10];
	double pay[10];
	cout<<endl<<endl;
	cout<<"Enter the Working houre's of 10 Employees in a week \n\n";
	for (int j=0;j<=9;j++)
	{
		cout<<j+1<<"  Employee working hour's = ";
		cin>>ovt[j];
		pay[j]=0;
		if(ovt[j]>40)
		{
			pay[j]=(ovt[j]-40)*12;
		}
	}
	cout<<"\n\n******************************************************* \n";
	cout<<"\t \t Weekly Overtime Pay of an Employees \n\n";
	for(int k=0;k<=9;k++)
	{
		
		cout<<k+1<<"  Employee Overtime Pay = "<<"Rs. "<<pay[k];
		cout<<endl;
	}
	cout<<"\n\n *******************************************************";
}
int main()
{
	cout<<"\t \t Weekly Overtime Pay of an Employees";
	cout<<endl<<endl;
	overtimePay();
	cout<<endl;
	system("pause");
	return 0;
}

