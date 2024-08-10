#include<iostream>
using namespace std;

//Using Temp 
void Swap(int iNo1,int iNo2)
{
	int iTemp=0;
	iTemp=iNo1;
	iNo1=iNo2;
	iNo2=iTemp;
	
	cout<<"After Swaping Number is:"<<iNo1<<"\t"<<iNo2<<endl;
	
}

//Without Using Temp

void Swap1(int iNo1,int iNo2)
{
		iNo2=iNo1+iNo2; //32=11+21
		iNo1=iNo2-iNo1; //21=32-11
		iNo2=iNo2-iNo1;//11=32-21
		
		cout<<"After Swaping Number is:"<<iNo1<<"\t"<<iNo2<<endl;
}

	//EOR Opreator Using

void Swap2(int iNo1,int iNo2)
{
	iNo2=iNo1^iNo2;
	iNo1=iNo1^iNo2;
	iNo2=iNo1^iNo2;
	
	cout<<"After Swaping Number is:"<<iNo1<<"\t"<<iNo2<<endl;
}
int main()
{
	int iValue1=0,iValue2=0;
	
	cout<<"Enter the First Number"<<endl;
	cin>>iValue1;
	
	cout<<"Enter the Second Number is"<<endl;
	cin>>iValue2;
	
	cout<<"Before Swaping Number is:"<<iValue1<<"\t"<<iValue2<<endl;
	//Swap Number using Thrid Number
	
	Swap(iValue1,iValue2);
	//Without Using Temp
	cout<<"Before Swaping Number is:"<<iValue1<<"\t"<<iValue2<<endl;
	Swap1(iValue1,iValue2);
	//EOR Opreator Using
	cout<<"Before Swaping Number is:"<<iValue1<<"\t"<<iValue2<<endl;
	Swap2(iValue1,iValue2);
	
	
	return 0;
}