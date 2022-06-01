#include <bits/stdc++.h>
using namespace std;
#define ASCII_SIZE 256

//Remove characters from string1 which are in string2
char *RemoveChars(char *string1, char *string2)
{
  //Count array stores the count of chars from string2
  int *count = (int *)calloc(sizeof(int), ASCII_SIZE);
  for(int i = 0; *(string2+i);  i++)
  {
      count[*(string2+i)]++;
  }
  int i  = 0, j = 0;
  while(*(string1 + i))
  {
    char temp = *(string1 + i);
    //If count of charcter is zero add to output
    if(count[temp] == 0)
    {
        *(string1 + j) = *(string1 + i);
        j++;
    }
    i++;
  }
 //Null termination
  //removing extra characters
  *(string1+j) = '\0';

  return string1;
}

//Main function to test above function
int main()
{
    //string1
    char string1[]  = "computer";
    //string2
    char string2[]  = "programming";
    cout<<"Input strings:\n";
    cout<<"string1: ";
    for (int i = 0; i < strlen(string1); ++i)
    {
      cout<<string1[i];
    }
    cout<<"\nstring2: ";
    for (int i = 0; i < strlen(string2); ++i)
    {
      cout<<string2[i];
    }
    //print output string
    cout<<"\nOutput: ";
    cout<<RemoveChars(string1, string2);
    return 0;
}
