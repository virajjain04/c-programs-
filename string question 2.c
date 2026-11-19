#include<stdio.h>
#include<string.h>
// convert a string to lower case
void main()
{ char arr[100];

  printf("Enter the string:");
  gets(arr);


  printf("The lower case string is : %s",strlwr(arr));

}
