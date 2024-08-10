#include<iostream>
using namespace std;

bool DigitAddition_Even_Odd(int iNo)
{
	int iDigit=0,iSum=0,iTemp=0;
	iTemp=iNo;
	while(iNo!=0)
	{
		iDigit=iNo%10;
		iSum=iSum+iDigit;
		iNo=iNo/10;
	}
	cout<<"Digit Addition is="<<iSum<<endl;
	if(iSum%2==0)
	{
		return true;
	}
	else
	{	
		return false;
	}
}
int main()
{
	int iValue=0;
	
	cout<<"Enter the Number"<<endl;
	cin>>iValue;
	
	bool bRet=DigitAddition_Even_Odd(iValue);
	if(bRet==true)
	{
		cout<<"Digit Addition is Even"<<endl;
	}
	else
	{
		cout<<"Digit Addition is Odd"<<endl;
	}
	
	return 0;
}