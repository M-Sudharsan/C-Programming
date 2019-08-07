#include<stdio.h>
int main()
{
    int num, d, a, sum=0;
    scanf("%d", &num);
    a=num;
    while(a>0)
    {
        d=a%10;
        sum=sum+d;
        a/=10;
    }
    if(num%sum==0)
    printf("Harshad Number");
    else
    printf("Not a Harshad Number");
    return 0;
}
