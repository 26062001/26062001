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

//Accending Order

void Sort(int iSize,int Arr[])
{
	int i=0,j=0;
	for(i=0;i<iSize;i++)
	{
		for(j=i+1;j<iSize;j++)
		{
			if(Arr[i]>Arr[j])
			{
				int iTemp=Arr[i];
				Arr[i]=Arr[j];
				Arr[j]=iTemp;
			}
		}
	}
}

//Decending Order
void Sort1(int iSize,int Arr[])
{
	int i=0,j=0;
	for(i=0;i<iSize;i++)
	{
		for(j=i+1;j<iSize;j++)
		{
			if(Arr[i]<Arr[j])
			{
				int iTemp=Arr[i];
				Arr[i]=Arr[j];
				Arr[j]=iTemp;
			}
		}
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
	
	cout<<"Befor Sorting Array is:"<<endl;
	Display(iLength,ptr);
	
	Sort(iLength,ptr);
	
	cout<<"Array Sorted in Accending Order:"<<endl;
	Display(iLength,ptr);
	
	Sort1(iLength,ptr);
	
	cout<<"Array Sorted in Decending Order:"<<endl;
	Display(iLength,ptr);
	
	return 0;
}