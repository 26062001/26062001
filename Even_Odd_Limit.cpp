//1 to 100 Even and odd Number list
//Count Even Odd Numbers
#include<iostream>
using namespace std;

int main()
{
	int Start=0,End=0;
	
	cout<<"Enter the Starting Limit"<<endl;
	cin>>Start;
	
	cout<<"Enter the Ending Limit"<<endl;
	cin>>End;
	
	int Count=0;
	
	cout<<"Even Number in the Entered Range in the Below"<<endl;
	for(int iCnt=Start;iCnt<=End;iCnt++)
	{
		if(iCnt%2==0)
		{
			cout<<iCnt<<"\t";
			Count++;
		}
	}
	cout<<endl;
	cout<<"Number of Even Number in the Entered Range/Limit:"<<Count<<endl;
	
	return 0;
}