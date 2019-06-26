#include<stdio.h>
int main()
{
    int num,rem,mul=1;
    scanf("%d",&num);
    while(1)
    {
        rem=num%10;
        mul=mul*rem;
        num=num/10;
        if(num==0)
        break;
}
    printf("%d",mul);
    
}
