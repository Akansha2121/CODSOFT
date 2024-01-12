#include<iostream>
using namespace std;
template <class T>
class calculator
{
	public: T first, second;
	void enter()
	{   cout<<"\n ENTER THE FIRST NUMBER :";
		cin>>first;
		cout<<" ENTER THE SECOND NUMBER :";
		cin>>second;
	}


T addition()     //addition of two numbers
{
	T sum=first+second;
	cout<<" ADDITION :"<<sum;
}
T subtraction()      //subtraction of two numbers
{   

	
T subt=first-second;
cout<<" SUBTRACTION :"<<subt;


} 
T multiplication()       //multiplication of two numbers
{
	T mul=first* second;
	cout<<mul;
}
T division()       // division of two numbers
{
	
	T div = first/second;
	cout<<" DIVISION :"<<div;
}};
int main()
{ cout<<"   THIS IS A SIMPLE CALCULATOR WHICH SHOWS ONLY FOUR ARITHMETIC OPERATIONS:- ADDITION,SUBSTRACTION,MULTIPLICATION,DIVISION \n\n       NOW YOU CAN USE IT!!!\n\n";
while(true)
{
int ch; 
char a;  
cout<<" FOR ADDITION ENTER 1\n FOR SUBTRACTION ENTER 2\n FOR MULTIPLICATION ENTER 3\n FOR DIVISION ENTER 4\n\n NOW ENTER YOUR CHOICE: ";
cin>>ch;
	calculator <double>c;
	c.enter();
	if(ch==1)
	c.addition();
	if(ch==2)
	c.subtraction();
	if(ch==3)
	c.multiplication();
	if(ch==4)
	c.division();
	cout<<"\n\n DO YOU WANT TO USE CALCULATOR AGAIN :";
	cin>>a;
	if(a=='n'||a=='N')
	{
		cout<<"\n THANK YOU !!";
	break;	
	}
}
	
	
}
