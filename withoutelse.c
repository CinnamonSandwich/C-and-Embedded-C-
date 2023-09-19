//find the largest number among three numbers without else statement
#include<stdio.h>

void main()
{
    int a,b,c;
    printf("Enter the three numbers");
    scanf("%d %d %d",&a,&b,&c);
    printf("a b and c are %d %d %d\n",a,b,c);
    int max=0;
    if(a>b)
    {
        max=a;
        if(c>max)
        {
            max=c;
        }
    }
    if(b>a)
    {
        max=b;
        if(c>max)
        max=c;
    }
    printf("The largest number is %d",max);
}