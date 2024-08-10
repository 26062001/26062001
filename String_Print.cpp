#include<iostream>
using namespace std;

int main()
{
	string Name;
	
	cout<<"Enter the String"<<endl;
	cin>>Name; //Accpet String without space
	
	//getline(cin,Name); accept string with space
	cout<<"Entered String is:"<<Name<<endl;
	
	return 0;
}