#include<stdio.h>
int main()
{int i=0,a[1000];
   while(1)
   {
       scanf("%d",&a[i]);
       if(a[i]==42)
       {
           break;
       }
       //printf("%d",a);
       i++;
   }
   int j=0;
  while(1)
   {
       if(a[j]==42)
       {
         break;
       }
       else
       {
           printf("%d\n",a[j]);
       }
       j++;
   }
   return 0;
}
