#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include "rlutil.h"
#include <stdlib.h>
using namespace std;
void easy(int a[])
{   srand(time(0));
    int arr[10][4]={
                     {9,9,8,1},
                     {5,8,8,9},
                     {5,5,9,1},
                     {3,3,4,1},
                     {4,7,1,1},
                     {7,7,4,6},
                     {2,1,6,6},
                     {4,4,2,8},
                     {8,3,4,6},
                     {8,4,1,1}
                    };
    int x=rand()%10;
    for(int j=0;j<4;j++)
    {
        a[j]=arr[x][j];

    }
}
void medium(int a[])
{ srand(time(0));
  int arr[10][4]={
                   {3,4,4,5},
                   {2,4,7,8},
                   {2,4,6,6},
                   {1,3,7,8},
                   {2,2,3,7},
                   {2,2,7,8},
                   {3,3,5,6},
                   {2,4,5,6},
                   {1,2,4,7},
                   {1,5,6,6},
                 };
  int x=rand()%10;
    for(int j=0;j<4;j++)
    {
        a[j]=arr[x][j];

    }
}
void difficult(int a[])
{  srand(time(0));
   int arr[10][4]={
                    {1,4,6,7},
                    {1,3,8,8},
                    {3,5,7,8},
                    {1,4,5,7},
                    {2,4,5,5},
                    {4,5,5,7},
                    {2,6,6,9},
                    {2,5,7,9},
                    {1,2,4,5},
                    {8,8,7,9},
                };
    int x=rand()%10;
    for(int j=0;j<4;j++)
    {
        a[j]=arr[x][j];

    }
}

void takeinput(int &x)
{
    rlutil::setColor(12);
    cout<<"\n\t\t\t    Select a number: ";
    cin>>x;

}
void check(int &op,int a[2][2],int &f)
{   f=0;
    for(int i=0;i<=2;i++)
    {
       for(int j=0;j<=2;j++)
       {
           if(op==a[i][j])
           {
               f=1;
               break;
           }
       }
    }
    if(f==0)
   {
       cout<<"\nInvalid input";
       takeinput(op);
   }

}
void changemat(int &op1,int &op2,int &t,int a[2][2])
{
    for(int i=0;i<2;i++)
    {
       for(int j=0;j<2;j++)
       {
           if(op1==a[i][j])
           {
               a[i][j]=0;
               break;
           }
        }
    }
    for(int i=0;i<2;i++)
    {
       for(int j=0;j<2;j++)
       {
           if(op2==a[i][j])
           {

               a[i][j]=t;
               break;
           }
        }
    }
   rlutil::cls();
   rlutil::setColor(10);
   cout<<"\n\t\t\t    ***************";
   cout<<"\n\t\t\t    *      *      *";
   cout<<"\n\t\t\t    *      *      *";
   cout<<"\n\t\t\t    *      *      *";
   cout<<"\n\t\t\t    ***************";
   cout<<"\n\t\t\t    *      *      *";
   cout<<"\n\t\t\t    *      *      *";
   cout<<"\n\t\t\t    *      *      *";
   cout<<"\n\t\t\t    ***************";
    rlutil::setColor(15);

    for(int i=0;i<2;i++)
    {
       for(int j=0;j<2;j++)
       {
          if(i==0&&j==0)
         {
             rlutil::locate(32,4);
             cout<<a[i][j];
         }
         if(i==0&&j==1)
         {
             rlutil::locate(39,4);
             cout<<a[i][j];
         }
         if(i==1&&j==0)
         {
             rlutil::locate(32,8);
             cout<<a[i][j];
         }
         if(i==1&&j==1)
         {
             rlutil::locate(39,8);
             cout<<a[i][j];
         }

       }
       cout<<"\n";

    }

}
int operation(int &x,int&y,char &ch)
{
   int total=0,j;
   if(ch=='+')
   {
       total=x+y;
   }
   if(ch=='-')
   {
       total=x-y;
   }
   if(ch=='*')
   {
       total=x*y;
   }
   if(ch=='/')
   {
       total=x/y;
   }
   return total;


}
void checkresult(int &t)
{   rlutil::setColor(11);
    cout<<"\n\t\t\t   Your result is: "<<t;
    if(t==24)
    {
        cout<<"\n\n\t\t\t   Great Job!!"<<endl;
    }
    else
        cout<<"\n\n\t\t\t   Try again!!"<<endl;
    rlutil::setColor(7);
}
void play(char b)
{
   int arr[4];
   int a[2][2];
   if(b=='A')
   {
       easy(arr);
   }
   if(b=='B')
   {
       medium(arr);
   }
   if(b=='C')
   {
       difficult(arr);
   }
   rlutil::cls();
   rlutil::setColor(10);
   cout<<"\n\t\t\t    ***************";
   cout<<"\n\t\t\t    *      *      *";
   cout<<"\n\t\t\t    *      *      *";
   cout<<"\n\t\t\t    *      *      *";
   cout<<"\n\t\t\t    ***************";
   cout<<"\n\t\t\t    *      *      *";
   cout<<"\n\t\t\t    *      *      *";
   cout<<"\n\t\t\t    *      *      *";
   cout<<"\n\t\t\t    ***************";
   int k=0;
   rlutil::setColor(15);
   for(int i=0;i<2;i++)
   {
       for(int j=0;j<2;j++)
       { if(i==0&&j==0)
         {   rlutil::locate(32,4);
             a[i][j]=arr[k];
             cout<<a[i][j];
             k++;
         }
         if(i==0&&j==1)
         {   rlutil::locate(39,4);
             a[i][j]=arr[k];
             cout<<a[i][j];
             k++;
         }
         if(i==1&&j==0)
         {   rlutil::locate(32,8);
             a[i][j]=arr[k];
             cout<<a[i][j];
             k++;
         }
         if(i==1&&j==1)
         {   rlutil::locate(39,8);
             a[i][j]=arr[k];
             cout<<a[i][j];
             k++;
         }
       }
       cout<<"\n";
   }

   int r=14,q=14;
   int n=3;
   int t;
   while(n!=0)
{  rlutil::setColor(7);
   rlutil::locate(r,q);
   int x, y;
   takeinput(x);
   int f=0;
   check(x,a,f);
   takeinput(y);
   check(y,a,f);
   cout<<"\n\t\t\t    Select an operator: ";
   char ch;
   cin>>ch;
   t=operation(x,y,ch);
   changemat(x,y,t,a);
   n--;
   }
   rlutil::locate(14,14);
   checkresult(t);

}
void showgamename()
{
    rlutil::setColor(12);
    cout<<"\n +++++++        ++++++        ++++          ++++     ++++    +++++++++++";
    cout<<"\n ++++   +++  +++  ++++      +++  +++        ++++   ++++      +++++++++++";
    cout<<"\n ++++      ++     ++++     +++    +++       ++++  ++++       ++++";
    cout<<"\n ++++             ++++    ++++++++++++      +++++++++        ++++++++";
    cout<<"\n ++++             ++++   +++++++++++++++    ++++   ++++      ++++";
    cout<<"\n ++++             ++++  ++++         ++++   ++++     ++++    +++++++++++";
    cout<<"\n ++++             ++++ +++++         +++++  ++++      ++++   +++++++++++";
    cout<<"\n";
    cout<<"\n";
    rlutil::setColor(11);
    cout<<"\n\t              ++++++++              ++";
    cout<<"\n\t             ++++++++++           ++++";
    cout<<"\n\t                   +++          ++  ++";
    cout<<"\n\t                  +++          ++   ++";
    cout<<"\n\t                +++          +++++++++++";
    cout<<"\n\t               +++          ++++++++++++";
    cout<<"\n\t              +++++++++             ++";
    cout<<"\n\t             +++++++++++            ++";
    rlutil::setColor(15);
    cout<<"\n\n\n\nHit a key to start the game.";
    rlutil::getkey();
    rlutil::cls();
}
int main()
{   char t;
    showgamename();
    do
  {
    rlutil::setColor(12);
    cout<<"\n\t\t\t          ----MAIN MENU----";
    rlutil::setColor(11);
    cout<<"\n\n\n\t\t\t              1.PLAY";
    cout<<"\n\n\n\t\t\t              2.ABOUT";
    cout<<"\n\n\n\t\t\t              3.HELP";
    cout<<"\n\n\n\t\t\t              4.EXIT";
    rlutil::setColor(10);
    int n;
    cout<<"\n\n\n\t\t\t             Enter Your choice : ";
    cin>>n;
    if(n==1)
    {rlutil::cls();
     rlutil::setColor(14);
     cout<<"\n\t\t\t          -----PLAY-----";
     rlutil::setColor(13);
     cout<<"\n\n\n\t\t\t               A.EASY    ";
     cout<<"\n\n\n\t\t\t               B.MEDIUM    ";
     cout<<"\n\n\n\t\t\t               C.DIFFICULT    ";
     cout<<"\n\n\n\t\t\t             Enter Your choice : ";
     char b;
     cin>>b;
     play(b);
    }
    if(n==2)
    {rlutil::cls();
     rlutil::setColor(14);
     cout<<"\n\t\t\t          -----ABOUT-----";
     rlutil::setColor(12);
     cout<<"\n\n\t\t\tGAME NAME :";rlutil::setColor(15);
     cout<<" MAKE 24";
     rlutil::setColor(12);
     cout<<"\n\n\t\t\tCREDIT: ";rlutil::setColor(15);
     cout<<"MRUDULA KULKARNI";
     rlutil::setColor(7);
    }
    if(n==3)
    {rlutil::cls();
     rlutil::setColor(14);
     cout<<"\n\t\t\t          -----HELP-----";
     rlutil::setColor(10);
     cout<<"\n\n\t\t\t  User will be given four numbers.";
     cout<<"\n\n\t\t\t  And using these four numbers and basic operators";
     cout<<"\n\n\t\t\t  i.e. + ,-,*,/";
     cout<<"\n\n\t\t\t  Try And ";rlutil::setColor(15);
     cout<<"Make 24";
     rlutil::setColor(7);

    }
    if(n==4)
    {   rlutil::setColor(7);
        rlutil::cls();
        exit(0);
    }
    cout<<"\n\n\t\t\tDo you want continue? Y or N: ";
    cin>>t;
    rlutil::cls();
  }while(t=='Y');

}
