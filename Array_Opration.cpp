#include<iostream>
using namespace std;
/*
	At time call only one Function
*/
//Display Array
void DisplayArray(int iSize,int Arr[])
{
	int iCnt=0;
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		cout<<Arr[iCnt]<<"\t";
	}
	cout<<endl;
}
//Insetr Element at any Position exception last index
void Insert_At_Pos(int iSize,int Arr[],int Index,int iNo)
{
		int iCnt=0;
		for(iCnt=iSize;iCnt>=Index;iCnt--)
		{
			Arr[iCnt+1]=Arr[iCnt];	
		}
		Arr[Index]=iNo;
}

//Insetr Element at Last
/*void Insert_At_Last(int iSize,int Arr[],int iNo)
{
		int iCnt=0;
		for(iCnt=0;iCnt<=iSize;iCnt++)
		{
				Arr[iSize]=iNo;
		}
	
}
*/
int main()
{
	int iLength=0,iCnt=0,Index=0,iValue=0;
	int *ptr=NULL;
	
	cout<<"Enter the Number of Elements"<<endl;
	cin>>iLength;
	
	cout<<"Enter the Index for Add element this Postion"<<endl;
	cin>>Index;
	
	cout<<"Enter the Number fo adding this Number"<<endl;
	cin>>iValue;
	
	ptr=new int[iLength];
	cout<<"Enter the Elements"<<endl;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		cin>>ptr[iCnt];
	}
	
	cout<<"Befor Adding Element array is:"<<endl;
	DisplayArray(iLength,ptr);
	
	Insert_At_Pos(iLength,ptr,Index,iValue);
	iLength=iLength+1;
	cout<<"After Adding Element array is:"<<endl;
	DisplayArray(iLength,ptr);
	
	/*Insert_At_Last(iLength,ptr,iValue);
	iLength=iLength+1;
	cout<<"After Adding Element array is:"<<endl;
	DisplayArray(iLength,ptr);
	*/
	return 0;
	
	
}