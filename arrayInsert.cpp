#include<stdio.h>
void insert(int arr[],int *size,int element,int pos);
void input(int arr[],int size);
void print(int arr[],int size);

int main()
{
    int n,element,pos;
   printf("enter no. of element\n");
   scanf("%d",&n);
   int arr[100];
   printf("enter  element and position \n");
   scanf("%d%d",&element ,&pos);
   input(arr,n);
   insert(arr,&n,element,pos);
   print(arr,n);

    return 0;
}



void insert(int arr[],int *size,int element, int pos)
{
   for(int i=*size-1;i>=pos-1;i--)
   {
      arr[i+1]=arr[i];
   }
   arr[pos-1]=element;
   (*size)++;
}

void input(int arr[],int size)
{
    printf("enter elements\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
}

void print(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}
