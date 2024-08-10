#include<iostream>
using namespace std;

void ArrayDisplay(int Arr[],int iSize)
{
	int iCnt=0;
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		cout<<Arr[iCnt]<<"\t";
	}
	cout<<endl;

}

int Array_Max(int Arr[],int iSize)
{
	int iCnt=0,iMax=0;
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		if(Arr[iCnt]>iMax)
		{
			iMax=Arr[iCnt];
		}
	}
	return iMax;
}

int Array_Min(int Arr[],int iSize)
{
	int iCnt=0,iMin=0;
	iMin=Arr[0];
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		if(Arr[iCnt]<iMin)
		{
			iMin=Arr[iCnt];
		}
	}
	return iMin;

}


int main()
{
	int iLength=0,iCnt=0;
	int *ptr=NULL;
	
	cout<<"Enter the number of Elements"<<endl;
	cin>>iLength;
	
	ptr=new int[iLength];
	cout<<"Enter the Elements"<<endl;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		cin>>ptr[iCnt];
	}
	cout<<"Entered Elements"<<endl;
	ArrayDisplay(ptr,iLength);
	
	int Minimum=Array_Min(ptr,iLength);
	cout<<"Minimum Element in Arry is:"<<Minimum<<endl;
	
	int Maximum=Array_Max(ptr,iLength);
	cout<<"Minimum Element in Arry is:"<<Maximum<<endl;
	
	int Diff=Maximum-Minimum;
	cout<<"The Differance between Maximum and Minimum:"<<Diff<<endl;
	
	return 0;
}