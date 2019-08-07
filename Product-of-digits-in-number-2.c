#include<stdio.h>
int main()
{
    int n, product=1, check, digit;
    scanf("%d",&n);
    check = n;
    while(check!=0)
    {
        digit=check%10;
        product=product*digit;
        check/=10;
    }	
    printf("%d", product);
    
}
