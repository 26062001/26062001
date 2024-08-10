#include<iostream>
using namespace std;

int main()
{
	int Start=1,Next=0,Target=0,iValue=0;
	
	cout<<"Enter the Number"<<endl;
	cin>>iValue;
	
	for(int iCnt=1;iCnt<=iValue;iCnt++)
	{
		
		Target=Start+Next;
		cout<<Target<<"\t";
		Start=Next;
		Next=Target;
	}
	
	return 0;
}