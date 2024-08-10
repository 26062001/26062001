#include<iostream>
using namespace std;

void ArrayDisplay(int iSize,int Arr[])
{
	int iCnt=0;
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		cout<<Arr[iCnt]<<"\t";
	}
	cout<<endl;
}


void ArrayDisplayReverse(int iSize,int Arr[])
{
	int iCnt=0;
	for(iCnt=iSize-1;iCnt>=0;iCnt--)
	{
		cout<<Arr[iCnt]<<"\t";
	}
	cout<<endl;
}

bool Palindrom(int iSize,int Arr[])
{
	int i=0,j=0;
	j=iSize-1;
	
	while(i<j)
	{
		if(Arr[i]==Arr[j])
		{
			return true;
		}
		else
		{
			return false;
		}
		i++;
		j--;
	}
}
int main()
{
	int iLength=0,iCnt=0;
	int *ptr=NULL;
	
	cout<<"Enter the Number of Elements"<<endl;
	cin>>iLength;
	
	ptr=new int[iLength];
	cout<<"Enter the Elements"<<endl;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		cin>>ptr[iCnt];
	}
	
	cout<<"Entered Element"<<endl;
	ArrayDisplay(iLength,ptr);
	
	cout<<endl;
	cout<<"Entered Elements Display iin Reverse Order"<<endl;
	ArrayDisplayReverse(iLength,ptr);
	cout<<endl;
	bool bRet=Palindrom(iLength,ptr);
	if(bRet==true)
	{
		cout<<"Array is Palindrom"<<endl;
	}
	else
	{
		cout<<"Array is Not Palindrom"<<endl;
	}
	return 0;
}