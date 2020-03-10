#include<iostream>
#include "console.h"
#include<time.h>
#include<stdio.h>
using namespace std;
void pause()
{
    cout << "enter to continue";
    cin.get();
    Console::SetCursorPosition(0,28);
    cout << "                 ";
}
int main()
{
    Console::SetTitle("Hoang Anh first game");
   int x = 5;
   int y = 10;
   int xcu = x;
   int ycu = y;
   int check;
   while(true)
   {
       check = 4;
       Console::SetCursorPosition(xcu,ycu);
       cout << ' ';
       Console::SetCursorPosition(x,y);
       xcu = x;
       ycu = y;
       cout << '*';
       Sleep(100);
       if(kbhit())
       {
           char kitu = getch();
           if(kitu=='w')
           {
               check = 0;
           }
           else if(kitu=='s')
           {
               check = 1;
           }
           if(kitu =='a')
           {
               check = 2;
           }
           if(kitu == 'd')
           {
               check = 3;
           }
           if(kitu == 'p')
           {
               Console::SetCursorPosition(0,28);
               pause();
           }

       }
       switch(check)
       {
   case 0:
       y=y-1;
       break;
   case 1:
    y=y+1;
    break;
   case 2:
    x = x-1;
    break;
   case 3:
       x = x+1;
       break;


       }
       if(x == 0)
       {
           x++;
       }
       if(y==0)
       {
           y++;
       }

       Console::SetCursorPosition(0,0);
       cout << x << " "<< y;
   }

}
