#include<iostream>
using namespace std;

int Digit_Sum(int iNo)
{
	int iSum=0,iDigit=0;
	while(iNo!=0)
	{
		iDigit=iNo%10;
		iSum=iSum+iDigit;
		iNo=iNo/10;
	}
	return iSum;
}
int main()
{
	int Value=0,iSum=0;
	
	cout<<"Enter the Number"<<endl;
	cin>>Value;
	
	iSum=Digit_Sum(Value);
	cout<<"Digit Sum is="<<iSum<<endl;
	
	return 0;
}
