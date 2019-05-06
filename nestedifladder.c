#include<stdio.h>
int main()
{
        int a,b,c,g;
        printf("enter 3 nos.\n");
        scanf("%d %d %d",&a,&b,&c);
        if(a>b)
        {
                if(a>c)
                        {
                        g=a;
                        }
        }
        else if(b>a)
        {
                if(b>c)
                {
                        g=b;
                }
        }
        else {
                g=c;
        }
printf("%d is the greatest number",g);
return 0;
}

