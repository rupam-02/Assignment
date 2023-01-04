#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>



void initial(int a[])
{
    for(int i=0;i<10;i++)
    {
        a[i]=rand()%99;

    }
}

void print(int a[])
{
    for(int i=0; i<10; i++)
    {
        printf("%d ",a[i]);
    }
}

float mean(int a[])
{
    float ans=0;
    for(int i=0 ; i< 10; i++)
    {
        ans += a[i];
    }
    return (float)(ans/10);
}

float variance(int a[])
{
    float mu=mean(a);
    float sum=0;
    for(int i=0; i < 10; i++)
    {
        sum += ((a[i] - mu) * (a[i] - mu));
    }
    return (float)(sum/10);
}

float dev(int a[])
{
    float sig= sqrt( variance(a) );
    return sig;
}

void main()
{
    int arr[10];
    float std,var,mea;
    srand(time(NULL));
    initial(arr);
    print(arr);
    printf("\n");
    mea= mean(arr);
    var= variance(arr);
    std= dev(arr);
    printf("mean is : %.3f\n",mea);
    printf("variance is : %.3f\n",var);
    printf("standard deviation is : %.3f\n",std);
}