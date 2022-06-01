#include<stdio.h>
//#include<bits/stdc++.h>
//using namespace std;
#include<string.h>
#define ASCII_SIZE 256
char *removechar(char *a, char *b)
{
  //Count array stores the count of chars from string2
  int *count = (int *)calloc(sizeof(int), ASCII_SIZE);
  for(int i = 0; *(b+i);  i++)
  {
      count[*(b+i)]++;
  }
  int i  = 0, j = 0;
  while(*(a + i))
  {
    char temp = *(a + i);
    //If count of charcter is zero add to output
    if(count[temp] == 0)
    {
        *(a + j) = *(a + i);
        j++;
    }
    i++;
  }
 //Null termination
  //removing extra characters
  *(a+j) = '\0';

  return a;
}
int main()
{
    char a[100001],b[100001];
    int t,i,p=0;
    scanf("%d",&t);
   //cin>>a>>b;

    //cout<<b<<endl;
    while(p<t)
{
     scanf("%s%s",&a,&b);
     for(i=0;i<strlen(a);i++)
    {
        if(a[i]>=97&&a[i]<=122)
        {
            a[i]=65+a[i]-97;
        }
    }
    //cout<<a<<endl;
    for(i=0;i<strlen(b);i++)
    {
        if(b[i]>=97&&b[i]<=122)
        {
            b[i]=65+b[i]-97;
        }
    }
    printf("%s",removechar(a,b));

    p++;
}
    return 0;
}
