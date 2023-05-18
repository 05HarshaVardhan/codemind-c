#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int s=0;
    while(n>0||s>10)
    {
        if(n==0)
        {
            n = s;
            s =0;
        }
        int r = n%10;
        s+=r;
        n = n/10;
    }
    printf("%d",s);
}