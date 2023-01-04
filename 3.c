#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define m 2
#define n 2


void initial(int a[][n])
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            a[i][j]=rand()%99;
        }
    }
}

void print(int a[][n])
{
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}

float series(int a[][n],int b[][n])
{
    float sum=0;
    float result;
    for(int i=0; i<n; i++)
    {
        sum += sqrt( abs(((a[1][i] - a[0][i]) * (a[1][i] - a[0][i])) - ((b[1][i] - b[0][i]) * (b[1][i] - b[0][i]))) ) ;
    
    }
    result = sum/n;
    return result;
}

void main()
{
    int x[m][n] , y[m][n];
    float output;
    srand(time(NULL));
    initial(x);
    print(x);
    printf("\n");
    initial(y);
    print(y);
    printf("\n");
    output = series(x,y);
    printf("output of series is : %f\n",output);
}