#include<iostream>
using namespace std;

bool Chk_Prime(int iNo)
{
	int iCnt=0,iTemp=0;
	iTemp=iNo;
	
	for(iCnt=2;iCnt<=iNo;iCnt++)
	{
		if(iNo%iCnt==0)
		{
			break;
		}
	}
	if((iTemp==iCnt)||(iTemp==1))
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
	
	cout<<"Enter the Number to Check Number is Prime or Not"<<endl;
	cin>>iValue;
	
	bRet=Chk_Prime(iValue);
	if(bRet==true)
	{
		cout<<"Number is Prime"<<endl;
	}
	else
	{
		cout<<"Number is Not Prime"<<endl;
	}
	
	return 0;
}