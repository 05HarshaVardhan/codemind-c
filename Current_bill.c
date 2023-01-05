#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    float cu,tc;
    if(n<=199)
    {
       tc=n*1.20;
       if(tc>400)
       {
           tc=(tc*0.15)+tc;
           printf("%.2f",tc);
       }
       else
       {
           printf("%.2f",tc+100);
       }
    }
    else if(n>=200&&n<400)
    {
        tc=n*1.50;
       if(tc>400)
       {
           tc=(tc*0.15)+tc;
           printf("%.2f",tc);
       }
       else
       {
           printf("%.2f",tc+100);
       }
    }
    else if(n>=400&&n<600)
    {
        tc=n*1.80;
       if(tc>400)
       {
           tc=(tc*0.15)+tc;
           printf("%.2f",tc);
       }
       else
       {
           printf("%.2f",tc+100);
       }
    }
    else if(n>=600)
    {
        tc=n*2.00;
       if(tc>400)
       {
           tc=(tc*0.15)+tc;
           printf("%.2f",tc);
       }
       else
       {
           printf("%.2f",tc+100);
       }
    }
}