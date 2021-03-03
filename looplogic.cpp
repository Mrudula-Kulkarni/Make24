#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdio.h>
#include <string.h>
#include <conio.h>
using namespace std;
void getplayername( char *p,int x)
{
    cout<<"\t\tEnter name of player"<<x<<":";
    gets(p);

}
int gettoss()
{
    srand(time(0));
    int c= rand()%2;
    if(c==0)
    {
        return 1;
    }
    else
    {
        return 2;
    }

}
int player1(int s1,char *p)
{
    int n;
    cout<<"\t\t"<<p<<"'s turn\n";
    cout<<"\t\tEnter the number from 1 to 10: ";
    cin>>n;
    cout<<"\n";
    s1=s1+n;

    return s1;
}
int player2(int s2,char*p)
{
    int m;
    cout<<"\t\t"<<p<<"'s turn\n";
    cout<<"\t\tEnter the numbers from 1 to 10 : ";
    cin>>m;
    cout<<"\n";
    s2=s2+m;

    return s2;
}
void result(int f,char*p1,char*p2)
{   cout<<"\t\t\t\tRESULT\t\t\t\t\n\n";
    if(f==1)
    {
        cout<<"\t\t\t\t"<<p1<<" wins\t\t\n";

    }
    else
    {
        cout<<"\t\t\t\t"<<p2<<" wins\t\t\n";
    }

}

int main()
{
  int x=gettoss();
  if(x==1)
  {   char p1[20],p2[20];
      getplayername(p1,1);

      getplayername(p2,2);
      cout<<"\n\n";
      int s=0,f=0;
     cout<<"\t\t"<<p1<<"  will play first\n\n";

     while(s>=0)
     {
         s=player1(s,p1);
         cout<<"\t\tSum now is:"<<s;

         cout<<"\n";
         if(s==100)
         {   f=1;
             break;
         }
         s=player2(s,p2);
         cout<<"\t\tSum now is:"<<s;
         cout<<"\n";
         if(s==100)
         {
             break;
         }


     }
     result(f,p1,p2);

  }
  if(x==2)
  {   char p1[20],p2[20];
      getplayername(p1,1);
      getplayername(p2,2);
      cout<<"\n\n";
      int s=0,q=0;
      cout<<"\t\t"<<p2<<" will play first:\n\n";
       while(s>=0)
     {
        s=player2(s,p2);
         cout<<"\t\tSum now is:"<<s;
         cout<<"\n";
         if(s==100)
         {   q=1;
             break;
         }
         s=player1(s,p1);
         cout<<"\t\tSum now is:"<<s;
         cout<<"\n";
         if(s==100)
         {
             break;
         }

     }
     result(q,p2,p1);

     }
}


