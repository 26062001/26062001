#include<iostream>
using namespace std;

bool Chk_Palindrom(int iNo)
{
	int iDigit=0,iRev=0,iTemp=0;
	iTemp=iNo;
	
	while(iNo!=0)
	{
		iDigit=iNo%10;
		iRev=(iRev*10)+iDigit;
		iNo=iNo/10;
	}
	cout<<"Reverse Number is :"<<iRev<<endl;
	if(iTemp==iRev)
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
	bool bRet=false;
	
	cout<<"Enter the Number to Check Number is Palindrom or Not"<<endl;
	cin>>iValue;
	
	bRet=Chk_Palindrom(iValue);
	if(bRet==true)
	{
		cout<<"Number is Palindrom"<<endl;
	}
	else
	{
		cout<<"Number is not Palindrom"<<endl;
	}
	
	return 0;
}