#include<iostream>
using namespace std;

int Addition_N(int iNo)
{
	int iCnt=0,iSum=0;
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		iSum=iSum+iCnt;
	}
	return iSum;
}
int main()
{
	int iValue=0,iCnt=0,iSum=0;
	
	cout<<"Enter the Limit"<<endl;
	cin>>iValue;
	
	if(iValue<0)
	{
		iValue=(-iValue);
	}
	for(iCnt=1;iCnt<=iValue;iCnt++)
	{
		iSum=iSum+iCnt;
	}
	
	cout<<"Addition of N Number is:"<<iSum<<endl;
	
	
	
	//By Using Function
	
	int Add=Addition_N(iValue);
	cout<<"Addition of N Number is:"<<Add;
	return 0;
}