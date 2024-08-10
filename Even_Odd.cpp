#include<iostream>
using namespace std;

int main()
{
	int iValue=0;
	
	cout<<"Enter the Number"<<endl;
	cin>>iValue;
	
	if(iValue%2==0)
	{
		cout<<iValue<<"Number is Even\n"<<endl;
	}
	else
	{
		cout<<iValue<<"Number is Odd"<<endl;
	}
	
	return 0;
}