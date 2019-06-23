#include<stdio.h>
int main()
{
    long long int arms, n, check, rem, sum=0, count=0, ans=1, i;
    scanf("%lld", &arms);
    n=arms;
    while(arms!=0)
    {
        arms/=10;    // arms = arms/10
       count++;
    }
   check=n;
    while(check!=0)
    {
        ans=1;
        rem = check%10;
        for(i=1;i<=count;i++)
        {
            ans=ans*rem;
        }
        sum=sum+ans;
        check = check/10;
    }
    if(sum==n)
        printf("%lld is an armstrong number", n);
    else
        printf("%lld is not an armstrong number", n);
}
