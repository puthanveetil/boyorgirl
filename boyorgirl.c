#include<stdio.h>
int main()
{char s[100];
 int i,a[96]={0},n;
 gets(s);
 for(i=0;s[i];i++)
  a[s[i]-32]=1;
 for(n=i=0;i<96;i++)
   n+=a[i];
 
printf(n%2==0? "CHAT WITH HER!" : "IGNORE HIM!");
 return 0;
}