#include <stdio.h>
#define uptowhere 20


void initial(int a[])
{
    for( int i=0 ; i<uptowhere-1; i++)
    {
        a[i]=i+2;
    }
}


void print(int a[])
{
    for(int i=0;i<uptowhere-1;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}


void sieve(int a[])
{
    int i,j;

    for(j=0;j<uptowhere-1;j++)
    {
        if(a[j] ==0)
            continue;
        for(i=1; (a[j]*i+j)<uptowhere-1 ;i++)
        {
            a[a[j]*i+j]= 0;    
        }
    }
    printf("prime no. are\n");
    
    for(int k=0;k<uptowhere-1;k++)    
    {
        if(a[k]!=0)
        {
            printf("%d ",a[k]);
        }
    }
    printf("\n");
}
void main()
{
    int a[uptowhere-1];
    initial(a);
    print(a);
    sieve(a);
}