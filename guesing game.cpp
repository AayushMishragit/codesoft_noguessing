#include <iostream>
using namespace std;
int main()
{
	cout<<"WELCOME TO THE GUESSING CHALLANGE"<<endl;
   int hideno=7;
   int yourno;
   int life=0;
   int chance=3;
   bool gameend=false;
   
   
   while(yourno!=hideno&& !gameend)
   {
   	if(life<chance){
   		cout<<"ENTER WHAT YOU HAVE CHOOSED:";
   		cin>>yourno;
   		life++;
	   }
	   else
	   {
	   	gameend=true;
	   }
	   }
	   if(gameend)
	   {
	   	cout<<"OOPS!YOU DEFEATED"<<endl;
	   }
	   else
	   {
	   	cout<<"BRAVO!YOU WONNED";
	   }
	   	
}
