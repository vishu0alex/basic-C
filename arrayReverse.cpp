#include <stdio.h>
void reverse(int arr[],int size);
void input(int arr[],int size);

int main()
{
int n;
printf("enter no. of element \n");
scanf("%d",&n);
int arr[n];
printf("enter elements \n ");
input(arr,n);
reverse(arr,n);
return 0;

}

void reverse(int arr[],int size)
{
    for(int i=0;i<size/2;i++)
    {
        int temp=arr[i];
        arr[i]=arr[size-i-1];
        arr[size-i-1]=temp;
    }
    printf("reverse array: ");
    for(int i=0;i<size;i++)
    {
        printf("%d  ",arr[i]);
    }
}

void input(int arr[],int size)
{
    for (int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
}
