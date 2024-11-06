#include <stdio.h>
int main() 
{
   int level, levelone, leveltwo;
   scanf("%d", &level);
   scanf("%d", &levelone);
   int ctrone=0, ctrtwo=0;
   int pone[200];
   while (ctrone<levelone) 
   {
       scanf("%d", &pone[ctrone]);
       ctrone++;
   }
   scanf("%d", &leveltwo);
   int ptwo[200];
   while (ctrtwo<leveltwo) 
   {
       scanf("%d", &ptwo[ctrtwo]);
       ctrtwo++;
   }
   int ctr = 1;
   while(ctr <= level) 
   {
       int ctr2=0;
       while (ctr2<level) 
       {
           if (ctr == pone[ctr2] || ctr == ptwo[ctr2]) 
           {
               break;
           }
           ctr2++;
       }
       if(ctr2==level && ctr2 > levelone && ctr2 > leveltwo) 
       {
           printf("Oh, my keyboard!");
           return 0;
       }
       ctr++;
   }
   printf("I become the guy.");
}
