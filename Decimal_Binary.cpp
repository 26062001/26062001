#include<iostream>
using namespace std;

int Decimal_Binary(int iNo)
{
	int iPower=1,iRet=0,iDigit=0;
	
	while(iNo!=0)
	{
		iDigit=iNo%2;
		iRet=(iDigit*iPower)+iRet;
		iPower=iPower*10;
		iNo=iNo/2;
	}
	return iRet;
}


int Binary_Decimal(int iNo)
{
	int iPower=1,iRet=0,iDigit=0;
	
	while(iNo!=0)
	{
		iDigit=iNo%10;
		iRet=(iDigit*iPower)+iRet;
		iPower=iPower*2;
		iNo=iNo/10;
	}
	return iRet;
}

int main()
{
	int iValue1=0,iValue2=0,iRet=0;
	
	cout<<"Enter the Decimal Number"<<endl;
	cin>>iValue1;
	
	cout<<"Enter the Binary Number"<<endl;
	cin>>iValue2;
	
	iRet=Decimal_Binary(iValue1);
	cout<<"Binary Number is:"<<iRet<<endl;
	

	int iRet1=Binary_Decimal(iValue2);
	cout<<"Decimal Number is:"<<iRet1;
	
	return 0;
}
	
