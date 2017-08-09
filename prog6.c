#include<stdio.h>
int main()
{
char n;
scanf("%c",&n);
if(n>='a'&&n<='z'||n>='A'&&n<='Z')
{
printf("\n%c is an alphabet",n);
}
else
{
printf("\n%c is not an alphabet",n);
}
return 0;
}
