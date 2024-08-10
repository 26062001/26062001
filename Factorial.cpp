#include<iostream>
using namespace std;

int Calculate_Factorial(int iNo)
{
	int iCnt=0,iFact=1;
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		iFact=iFact*iCnt;
	}
	return iFact;
}
int main()
{
	int iValue=0,iFact=1,iCnt=0;
	
	cout<<"Enter the Number"<<endl;
	cin>>iValue;
	
	if(iValue<0)
	{
		iValue=(-iValue);
	}
	else if(iValue==0)
	{
		return 0;
	}

		for(iCnt=1;iCnt<=iValue;iCnt++)
		{
			iFact=iFact*iCnt;
		}
		cout<<"Factorial is"<<iFact;

		//By using Function
		cout<<endl;
		int Factorial=Calculate_Factorial(iValue);
		cout<<"Factorial is:"<<Factorial;
	
		return 0;
}