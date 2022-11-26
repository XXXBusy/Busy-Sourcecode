#include<stdio.h>
int main()
{
	int repeat,begin,end,C,i;
	int F;
	scanf("%d",&repeat);
	for(i=1;i<=repeat;i++)
	{
		scanf("%d %d",&begin,&end);
		for(C=begin;C<=end;C++)
		{
			F=32+C*9/5;
			if(C==begin)
			printf("Celsius Fahrenheit\n");
			printf("%d%10d\n",C,F);
		}
	}
	return 0;

