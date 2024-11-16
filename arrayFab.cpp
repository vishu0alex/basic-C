#include<stdio.h>
void fab(int arr[],int size);
void print(int arr[],int size);


int main()
{
    int n;
    printf("enter no.");
    scanf("%d",&n);
    int arr[n];
    fab(arr,n);
    print(arr,n);

    return 0;
}



void fab(int arr[],int size)
{
    arr[0]=0,arr[1]=1;
    for(int i=2;i<size;i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
    }

}

void print(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}
