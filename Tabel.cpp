#include<iostream>
using namespace std;

int main()
{
	int iValue=0,iCnt=0,iMult=1;
	
	
	cout<<"Enter the number"<<endl;
	cin>>iValue;

	for(iCnt=1;iCnt<=10;iCnt++)
	{
		 iMult=iValue*iCnt;
		cout<<iMult<<endl;
	}
	
	return 0;
}