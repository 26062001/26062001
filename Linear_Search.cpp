#include<iostream>
using namespace std;

void Display(int iSize,int Arr[])
{
	int iCnt=0;
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		cout<<Arr[iCnt]<<"\t";
	}
	cout<<endl;
}

void Search_Key(int iSize,int Arr[],int Key)
{
	int iCnt=0;
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		if(Arr[iCnt]==Key)
		{
			cout<<" Key is Found in Index Number is:"<<iCnt;
		}
	}
}
int main()
{
	int iLength=0,iCnt=0,Key=0;
	int *ptr=NULL;
	
	cout<<"Enter the number of Elements"<<endl;
	cin>>iLength;
	
	cout<<"Enter the Key to Search"<<endl;
	cin>>Key;
	
	ptr=new int[iLength];
	cout<<"Enter the Elements"<<endl;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		cin>>ptr[iCnt];
	}
	cout<<"Entered Elements"<<endl;
	Display(iLength,ptr);
	
	Search_Key(iLength,ptr,Key);
	
	
	
	return 0;
}