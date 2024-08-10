#include<iostream>
using namespace std;

int ReverseNumber(int iNo)
{
	int iRev=0,iDigit=0;
	
	while(iNo!=0)
	{
		iDigit=iNo%10;
		iRev=(iRev*10)+iDigit;
		iNo=iNo/10;
	}
	return iRev;
}
int main()
{
	int iValue=0;
	
	cout<<"Enter the Number to Reverse Number"<<endl;
	cin>>iValue;
	
	int Reveras=ReverseNumber(iValue);
	cout<<"Reverse Number is:"<<Reveras<<endl;
	
	return 0;
}