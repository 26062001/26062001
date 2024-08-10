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
	
	return 0;
}