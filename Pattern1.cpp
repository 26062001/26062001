#include<iostream>
using namespace std;

/*
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *  
*/
void Display(int iRow,int iCol)
{
	int i=0,j=0;
	
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
}
int main()
{
	int iValue1=0,iValue2=0;
	
	cout<<"Enter Number of Rows"<<endl;
	cin>>iValue1;
	
	cout<<"Enter Number of Columns"<<endl;
	cin>>iValue2;
	
	Display(iValue1,iValue2);
	
	return 0;
}