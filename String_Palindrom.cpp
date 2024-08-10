#include<iostream>
using namespace std;

int CounLength(string Name)
{
	int iCnt=0;
	while(Name[iCnt])
	{
		iCnt++;
	}
	return iCnt;
}

void Reverse(string Name,int iSize)
{
	int iCnt=0,Start=0,End=0;
	End=iSize-1;
	string Temp;
	Temp=Name;
	for(iCnt=iSize;iCnt>=0;iCnt--)
	{
		cout<<Name[iCnt];
	}
	cout<<endl;
	if(Name[Start]==Name[End])
	{
		cout<<"String Palindrom"<<endl;
	}
	else
	{	
		cout<<"String is Not Palindrom"<<endl;
	}
	
}
int main()
{
	string Name;
	
	cout<<"Enter the String"<<endl;
	getline(cin,Name);
	
	cout<<"Entered String is:"<<Name<<endl;
	int iLength=CounLength(Name);
	cout<<"String Length is:"<<iLength<<endl;
	
	cout<<"Reverse String is:"<<endl;
	Reverse(Name,iLength);
	
	return 0;
}