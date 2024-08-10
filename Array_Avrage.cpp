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

int Array_Addition(int Arr[],int iSize)
{
	int iCnt=0,iSum=0;
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		iSum=Arr[iCnt]+iSum;
	}
	return iSum;

}

float Array_Avrage(int Sum,int iSize)
{
	float Avr=(Sum/iSize);
	
	return Avr;
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
	
	int Sum=Array_Addition(ptr,iLength);
	cout<<"Addition of All elements is:"<<Sum<<endl;
	
	float Avrage=Array_Avrage(Sum,iLength);
	cout<<"Avarge of Elemets is:"<<Avrage<<endl;
	
	return 0;
}