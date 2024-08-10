#include<iostream>
using namespace std;

int Addition(int iNo1,int iNo2)
{
	int Sum=iNo1+iNo2;
	
	return Sum;
}
int main()
{
	int iValue1=0,iValue2=0,iSum=0;
	
	cout<<"Enter the First Number"<<endl;
	cin>>iValue1;
	
	cout<<"Enter the Second Number"<<endl;
	cin>>iValue2;
	
	iSum=iValue1+iValue2;
	cout<<"Addition of Two Number is:"<<iSum<<endl;
	
	
	//By Using Function
	int Add=Addition(iValue1,iValue2);
	cout<<"Addition of Two Number is:"<<Add<<endl;
	
	return 0;
}