#include<stdio.h>
int main()
{
	int n,i,a,repeat;
	double s;
	scanf("%d",&repeat);
	for(;repeat>0;repeat--)
	{
		a=1;
		s=0;
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			a*=i;
			s+=1.0/a; 
		}	
		printf("%.4f\n",s);
	}
	return 0;
 } 
