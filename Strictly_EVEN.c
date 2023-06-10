#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int x[n];
    int k=1;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
        
        if(i%2==0 && x[i]%2!=0)
        {
            k=0;
        }
    }
    if(k==1)
    printf("True");
    else 
    printf("False");
    
    
}