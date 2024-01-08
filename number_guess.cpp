#include<iostream>
#include<ctime>
#include <cstdlib>
using namespace std;
int main()
{   char a,c;
cout<<"                 WELCOME TO NUMBER GUESSING GAME "<<endl<<"                     HOPE YOU WILL ENJOY :) :)\n\n  ";
    cout<<" DO YOU WANT TO START THE GAME ? (Y/N): ";
    cin>>a;
    if(a=='Y' || a=='y' )
    {
	int ch=1;
	while(ch==1) 

	{   int guess;
	srand(time(0));
        int number = 1 + (rand() % 100);
        		cout<<"\n RULE -> YOU WILL GET 5 CHOICES \n GOOD LUCK :) \n\n";
		

		for(int i=0;i<5;i++)
		{cout<<"\nGUESS THE NUMBER BETWEEN 1 to 100 :";
		cin>>guess;
			
			if(number==guess)
			{
			   cout<<" HURRAY!! You won \n You guessed the right number.";
			   break;
			}
			else
			cout<<"\n CHANCES LEFT:"<<4-i<<endl;
			if(number<guess)
			{
			  cout<<"Your guess is high !! TRY AGAIN \n";
			}
			else
			if(number>guess)
			{
				cout<<"Your guess is low!! TRY AGAIN \n";
			}
			if((4-i)==0)
			{
				cout<<"\nOOPS!! YOU LOST";
			}
		}
		cout<<"\n\n DO YOU WANT TO PLAY AGAIN (y/n):";
		cin>>c;
		if(c=='n'|| c=='N')
		break;
			
	}
}
else 
if(a=='N' || a=='n')
{
 cout<<" Thank you!! "; 	
}
else 
{
	cout<<" WRONG INPUT !! ";
}
}
