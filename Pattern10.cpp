#include<iostream>
using namespace std;
/*
1 2 3 4 5
F G H I J
11 12 13 14 15
P Q R S T
21 22 23 24 25
*/

void Display(int iRow,int iCol)
{
	int i=0,j=0;
	char ch='A';
	int Count=1;
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			if(i%2==0)
			{
				cout<<ch<<"\t";
				
			}
			else
			{
				cout<<Count<<"\t";
			}
			ch++;
			Count++;		
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