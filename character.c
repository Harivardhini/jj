#include<stdio.h>
int main();
{
char c;
printf("enter the character");
scanf("%c",&c);
if((c>='a'&&c<='z')//(c>='A'&&c<='Z'))
printf("%c is an alphabet");
else
printf("%c is not an alphabet");
return (0);
}
