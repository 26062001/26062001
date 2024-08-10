#include<iostream>
using namespace std;

int Max_of_Four(int iNo1,int iNo2,int iNo3,int iNo4)
{
		if((iNo1>iNo2)&&(iNo1>iNo3)&&(iNo1>iNo4))
		{
				return iNo1;
		}
		else if((iNo2>iNo1)&&(iNo2>iNo3)&&(iNo2>iNo4))
		{
				return iNo2;
		}
		else if((iNo3>iNo1)&&(iNo3>iNo2)&&(iNo3>iNo4))
		{
			return iNo3;
		}
		else 
		{
			return iNo4;
		}
}

int main()
{
		int iValue1=0,iValue2=0,iValue3=0,iValue4=0,iMax=0;
		
		cout<<"Enter the 1st Number"<<endl;
		cin>>iValue1;
		
		cout<<"Enter the 2nd Number"<<endl;
		cin>>iValue2;
		
		cout<<"Enter the 3rd Number"<<endl;
		cin>>iValue3;
		
		cout<<"Enter the 4th Number"<<endl;
		cin>>iValue4;
		
		iMax=Max_of_Four(iValue1,iValue2,iValue3,iValue4);
		cout<<"Maximum Number is a:"<<iMax<<endl;
		 
}


//Maximum Number of Two Numbers
/*#include<iostream>
 using namespace std;
int Maximum_Num(int iNo1,int iNo2)
{
	if(iNo1>iNo2)
	{
		return iNo1;
	}
	else
	{
		return iNo2;
	}
}
int main()
{	
	int iValue1=0,iValue2=0;
	
	cout<<"Enter the First Number"<<endl;
	cin>>iValue1;
	
	cout<<"Enter the Second Number"<<endl;
	cin>>iValue2;
	
	int Maximum=Maximum_Num(iValue1,iValue2);
	cout<<"Maximum Number is:"<<Maximum<<endl;
	
	return 0;
}*/