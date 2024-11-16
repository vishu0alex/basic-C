#include<stdio.h>
void largest(int arr[],int size);
void input(int arr[],int size);

int main()
{
    int n;
   printf("enter no. of element\n");
   scanf("%d",&n);
   int arr[n];
   input(arr,n);
   largest(arr,n);
   
    return 0;
}



void largest(int arr[],int size)
{
    int max=arr[0];
    for(int i=0;i<size;i++)
    {
       if(arr[i]>max)
       max=arr[i];
    }

    printf("largest no: %d\n",max);
}

void input(int arr[],int size)
{
    printf("enter element\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
}

