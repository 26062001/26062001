#include<iostream>
using namespace std;

int Calcuate_Power(int Base,int Power)
{
	int Ans=1;
	while(Power!=0)
	{
		Ans=Base*Ans;
		Power--;
	}
	return Ans;
}
int main()
{
	int iValue1=0,iValue2=0;
	
	cout<<"Enter the Base"<<endl;
	cin>>iValue1;
	
	cout<<"Enter the Power "<<endl;
	cin>>iValue2;
	
	int Power=Calcuate_Power(iValue1,iValue2);
	cout<<"Base to the Power="<<Power<<endl;
	
	return 0;
}