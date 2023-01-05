#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    int i;
	for(i=1;i<=t;i++)
    {
        int x;
        scanf("%d",&x);
        if(x<3)
        {
        	printf("LIGHT
");
		}
        else if(x>=3&&x<7)
        {
        	printf("MODERATE
");
		}
        else if(x>=7)
        {
        	printf("HEAVY
");
		}
       
    }
}