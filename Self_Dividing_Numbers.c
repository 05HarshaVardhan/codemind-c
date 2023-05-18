# include<stdio.h>

int
main()
{
    int a, b;
scanf("%d%d", & a, & b);
for (int i=a;i <= b;i++)
{
    int n=i;

int m=n, r, v=0, k=0;
if (n % 10 != 0)
{

while (n > 0)
    {
        r = n % 10;
    k++;
    if (m % r == 0)
    {
    v++;
    }
    n=n / 10;
    }
    if (k == v)
        {
            printf("%d ", i);
        }
        }
        }
        }