#include <stdio.h>
#define DNUM 100
int pcount(int a[],int n);
double avg (int a[],int n);
int large (int a[],int n);
int smaill (int a[],int n);

int main() {
        int data[DNUM],k,n;

        printf("데이터의 수: ");
        scanf("%d", &n);
        printf("Enter %d data\n", n);

        
        for (k=0; k<n; k++);
            scanf("%d", &data[k]);
            printf("The number of positive data: &d\n", pcount(data, n));
            printf("Average = %.2f\n", large(data, n));
            printf("Maximum value = %d\n", large(data, n));
            printf("Minimum value = %d\n", small(data, n));
        
}

int pcount(int a[], int n)
{
    int j, result=0;
    for (j=0; j<n; j++)
        if (a[j]> 0) result++;
return result;
}

double avg (int a[], int n)
{
    int i, sum=0;
    for(i=0; i<n; i++)
        sum=sum+a[i];
    return (double)sum/n;
}

int large(int a[], int n)
{
    int i, max;
    max =a[0];
    for (i=1; i<n; i++)
        if(a[i]>max) max=a[i];
        
    return max;
    }

    int small(int a[], int n)
    {
        int i,min;
        min=a[0];
        for (i=1; i<min; i++)
            if(a[i]<min) min=a[i];
            return min;
    }




