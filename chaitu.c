#include<stdio.h>
#include<string.h>
int main()
{
 int i,j;
 char str[10],temp;
 printf("helloo \n");
 printf("enter a string:");
 gets(str);
 i=0;
 j=strlen(str)-1;
 while(i<j)
 {
   temp=str[i];
   str[i]=str[j];
   str[j]=temp;
i++;j--;
}
   puts(str);
return 0;
}

