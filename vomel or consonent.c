#include<stdio.h>
#include<conio.h>
int main()
{
char c;
int lowercase vowel,uppercase vowel;
printf("Enter an alphabet:");
scanf("%d",&c);
lowercase=( c =='a' || c =='e' || c =='i' || c =='o' || c =='u' )
uppercase=( c =='A' || c =='E' || c =='I' || c =='O' || c =='U' )
if(lowercase || uppercase)
{
printf("%c is vowel.",c);
else
printf("%c is consonent.",c);
return 0;
}
