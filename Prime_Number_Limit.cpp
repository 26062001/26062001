#include<iostream>
using namespace std;

int Prime_Number_Range(int Start,int End)
{
	int i=0,iCnt=0,iTemp=0, Count=0;
	for(i=Start;i<=End;i++)
	{
	
		for(iCnt=Start;iCnt<=End;iCnt++)
		{
			iTemp=i;
			
			if(i%iCnt==0)
			{
				break;
			}
		}
		if((iTemp==iCnt)||(iTemp==1))
		{
			Count++;
			cout<<iTemp<<"\t";
		}
	}
	return Count;

}
int main()
{
	int Start=0,End=0;
	
	cout<<"Enter the Starting Limit"<<endl;
	cin>>Start;
	
	cout<<"Enter the Ending Limit"<<endl;
	cin>>End;
	
	int Count=Prime_Number_Range(Start,End);
	cout<<endl;
	
	cout<<"In the Range Prime Number Count is:"<<Count;
	
	return 0;
}