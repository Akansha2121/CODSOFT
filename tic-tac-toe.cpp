#include<iostream>
using namespace std;
int i=0;
void display(char a[3][3])  //display the tic -board
{
	cout<<"PLAYER - 1 [X]\t PLAYER - 2 [O]\n\n";
    cout<<"\t\t     |     |     \n";
    cout<<"\t\t  "<<a[0][0]<<"  | "<<a[0][1]<<"   |  "<<a[0][2]<<" \n";
    cout<<"\t\t_____|_____|_____\n";
    cout<<"\t\t     |     |     \n";
    cout<<"\t\t  "<<a[1][0]<<"  | "<<a[1][1]<<"   |  "<<a[1][2]<<" \n";
    cout<<"\t\t_____|_____|_____\n";
    cout<<"\t\t     |     |     \n";
    cout<<"\t\t  "<<a[2][0]<<"  | "<<a[2][1]<<"   |  "<<a[2][2]<<" \n";
    cout<<"\t\t     |     |     \n";
    i++;
}

int main()
{ 
cout<<"\t\t\t       ____________________________\n";
cout<<"\t\t\t      |         TIK-TAC-TOE        |\n";
cout<<"\t\t\t      |____________________________|\n\n\n";
cout<<"\t INFO \n\n";
char arr[3][3]={'1','2','3','4','5','6','7','8','9'};
	display(arr);
    while(i<=9)
    {  char c1,c2;
	cout<<"PLAYER 1:\n";
    cout<<"\nEnter the position at which you want to insert X:";
    cin>>c1;
    if(c1<='9'&&c1>='1')
    {
	
    for(int i=0;i<3;i++)
    {
    	for(int j=0;j<3;j++)
    	{
    		if(c1==arr[i][j])
    		{
    			arr[i][j]='X';
			}
		}
	}
	display(arr);
}
else
{
	cout<<"Wrong input!!!";
	break;
}
// conditions for winning
		if((arr[0][1]=='X'&&arr[0][0]=='X'&&arr[0][2]=='X')||(arr[0][0]=='X'&&arr[1][1]=='X'&&arr[2][2]=='X')||(arr[0][2]=='X'&&arr[1][1]=='X'&&arr[2][0]=='X')||(arr[0][2]=='X'&&arr[1][2]=='X'&&arr[2][2]=='X')||(arr[2][0]=='X'&&arr[2][1]=='X'&&arr[2][2]=='X')||(arr[0][0]=='X'&&arr[1][0]=='X'&&arr[2][0]=='X')||(arr[1][0]=='X'&&arr[1][1]=='X'&&arr[1][2]=='X'))
	{
			cout<<"\nHURRAY!!\nPlayer 1 wins";
			break;}
			else
		if((arr[0][1]=='0'&&arr[0][0]=='0'&&arr[0][2]=='0')||(arr[0][0]=='0'&&arr[1][1]=='0'&&arr[2][2]=='0')||(arr[0][2]=='0'&&arr[1][1]=='0'&&arr[2][0]=='0')||(arr[0][2]=='0'&&arr[1][2]=='0'&&arr[2][2]=='0')||(arr[2][0]=='0'&&arr[2][1]=='0'&&arr[2][2]=='0')||(arr[0][0]=='0'&&arr[1][0]=='0'&&arr[2][0]=='0')||(arr[1][0]=='0'&&arr[1][1]=='0'&&arr[1][2]=='0'))
		{
		cout<<"\nHURRAY!!\nPlayer 2 wins";
		break;}
		
    cout<<"PLAYER 2:\n";
    cout<<"\nEnter the position at which you want to insert 0:";
    cin>>c2;
    if(c2<='9'&&c2>='1')
    {
	
    for(int i=0;i<3;i++)
    {
    	for(int j=0;j<3;j++)
    	{
    		if(c2==arr[i][j])
    		{
    			arr[i][j]='0';
			}
		}
	}
	display(arr);
}
else
{
	cout<<"\nWrong input!!";
	break;
}
if(i==10)               //starting display is also included so 10
{ cout<<"\nGAME IS TIED";       
		break;
	

	}}
	
