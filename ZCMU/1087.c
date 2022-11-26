#include<stdio.h>
int main()
{
    char a;
    int repeat,letter,blank,other,digit;
    scanf("%d",&repeat);
    a=getchar();
    for(;repeat>0;repeat--)
    {   
        letter=0;
        blank=0;
        digit=0;
        other=0;
        while(1){
        a=getchar();
        if(a==EOF||a=='\n')
        break;
        else if((a<='Z'&&a>='A')||(a<='z'&&a>='a'))
        letter=letter+1; 
        else if(a==' ')
        blank=blank+1; 
        else if(a>='0'&&a<='9')
        digit=digit+1;
        else
        other=other+1;
        }
        printf("letter=%d,blank=%d,digit=%d,other=%d\n",letter,blank,digit,other);
    }
    return 0;
}

