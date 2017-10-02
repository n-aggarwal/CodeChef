#include<iostream>

using namespace std;

int main()
{
     char ID;
     int t,i=0;
     cin>>t;

     while(i<t)
     {
          cin>>ID;
          if((ID=='D')||(ID=='d'))
               cout<<"\nDestroyer\n";
          else if((ID=='C')||(ID=='c'))
               cout<<"\nCruiser\n";
          else if((ID=='B')||(ID=='b'))
               cout<<"\nBattleShip\n";
          else if((ID=='F')||(ID=='f'))
               cout<<"\nFrigate\n";
               i++;
     }
}
