#include<iostream>
#include<bits/stdc++.h>
using namespace std;
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
    char a[1000],b[1000];
    int t,i,p=0;
    cin>>t;
   //cin>>a>>b;

    //cout<<b<<endl;
    while(p<t)
{
     cin>>a>>b;
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
    cout<<removechar(a,b)<<endl;

    p++;
}
    return 0;
}
