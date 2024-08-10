#include<iostream>
using namespace std;

int Factor_Sum(int iNo)
{
	int iCnt=0,iSum=0;
	for(iCnt=1;iCnt<=iNo/2;iCnt++)
	{
		if(iNo%iCnt==0)
		{
			iSum=iSum+iCnt;
		}
	}
	return iSum;
}
int main()
{
	int iValue=0,iSum=0;
	bool bRet=false;
	
	cout<<"Enter the Number to Check Number is Perfect or Not"<<endl;
	cin>>iValue;
	
	int Fact_Sum=Factor_Sum(iValue);
	cout<<"Factors Sum is:"<<Fact_Sum<<endl;
	
	
	if(iValue==Fact_Sum)
	{
		cout<<"Number Perfect"<<endl;
	}
	else
	{
		cout<<"Number Not Perfect"<<endl;
	}
	
	
	return 0;
}