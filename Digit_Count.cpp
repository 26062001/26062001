#include<iostream>
using namespace std;

int Digit_Count(int iNo)
{
	int iDigit=0,Count=0;
	
	while(iNo!=0)
	{
		iDigit=iNo%10;
		Count++;
		iNo=iNo/10;
	}
	return Count;
}
int main()
{
	int iValue=0;
	
	cout<<"Enter the Number to Count the Digit"<<endl;
	cin>>iValue;
	
	int Count=Digit_Count(iValue);
	cout<<"In the Entered Number of Digit found="<<Count;
	
	return 0;
}