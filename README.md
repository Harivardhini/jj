# include<stdio.h>
int main();
{
char c;
printf("Enter the character");
scanf("%c",&c);
if((c>'a'&&c<'z')//(c>'A'&&c<'Z'))
printf("%c is an alphabet");
else
printf("%c is not a alphabet");
return(0);
}
