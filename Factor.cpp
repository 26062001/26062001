#include<iostream>
using namespace std;

int main()
{
	int iValue=0,iCnt=0;
	
	cout<<"Enter the Number"<<endl;
	cin>>iValue;
	
	if(iValue<0)
	{
		return 0;
	}
	
	for(iCnt=1;iCnt<=iValue;iCnt++)
	{
		if(iValue%iCnt==0)
		{
			cout<<iCnt<<"\t";
		}
	}
	
	return 0;
}