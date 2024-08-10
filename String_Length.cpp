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
int main()
{
	string Name;
	
	cout<<"Enter the String"<<endl;
	getline(cin,Name);
	
	cout<<"Entered String is:"<<Name<<endl;
	int iLength=CounLength(Name);
	cout<<"String Length is:"<<iLength<<endl;
	
	return 0;
}