#include<iostream>
using namespace std;

void Display(int iSize,int Arr[])
{
	int iCnt=0;
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		cout<<Arr[iCnt]<<"\t  	";
	}
	cout<<endl;
}
void Sort(int iSize,int Arr[])
{
	int i=0,j=0,iTemp=0;
	for(i=0;i<iSize;i++)
	{
		for(j=i+1;j<iSize;j++)
		{
			if(Arr[i]>Arr[j])
			{
				iTemp=Arr[i];
				Arr[i]=Arr[j];
				Arr[j]=iTemp;
			}
		}
	}
}
int BinarySearch(int iSize,int Arr[],int Key)
{
	int iStart=0,iEnd=0,iMid=0;
	iEnd=iSize;
	
	
	
	while(iStart<=iEnd)
	{
		iMid=(iStart+(iEnd-iStart)/2);
		
		if(Key==Arr[iMid])
		{
			return iMid;
		}
		else if(Key>Arr[iMid])
		{
			iStart=iMid+1;
		}
		else
		{
			iEnd=iMid-1;
		}
		iStart++;
		iEnd--;
	}
	return -1;
}
int main()
{
	int iLength=0,iCnt=0,Key=0;
	int *ptr=NULL;
	
	cout<<"Enter the Number of Elemenets"<<endl;
	cin>>iLength;
	
	cout<<"Enter the Key to Search"<<endl;
	cin>>Key;
	
	ptr=new int[iLength];
	cout<<"Enter the Elements"<<endl;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		cin>>ptr[iCnt];
	}
	
	cout<<"Array Elements:"<<endl;
	Display(iLength,ptr);
	
	Sort(iLength,ptr);
	cout<<"Sorted Array is:"<<endl;
	Display(iLength,ptr);
	
	int iRet=BinarySearch(iLength,ptr,Key);
	if(iRet==-1)
	{
		cout<<"Key is not Found\n"<<endl;
	}
	else
	{
		cout<<"Key is Found at Index number:"<<iRet;
	}
	return 0;
}