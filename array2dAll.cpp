#include<stdio.h>
void input(int arr[][100],int row, int col)
{
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
}


void print(int arr[][100],int row, int col)
{
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}

void sum(int arr[][100],int arr2[][100],int row, int col)
{
    int arr3[100][100]={0},row3=row,col3=col;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
		    arr3[i][j]=arr[i][j]+arr2[i][j];
		}
	}
	print(arr3,row3,col3);
}

void reverse(int arr[][100],int row, int col)
{
    int arr2[100][100]={0},row2=row,col2=col;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
		    arr2[i][j]=arr[j][i];
		}
	}
	print(arr2,row2,col2);
}


int main()
{
	int row,col;
	int arr[100][100],arr2[100][100];
	printf("enter row and column \n");
	scanf("%d%d",&row,&col);
	
	printf("enter the element of matrix 1\n");
	input(arr,row,col);
	printf("enter the element of matrix 2\n");
	input(arr2,row,col);
    print(arr,row,col);
    printf("\n");
    print(arr2,row,col);
    printf("sum = \n");
    sum(arr,arr2,row,col);
    printf("reverse = \n");
    reverse(arr,row,col);
   
	
    return 0;	
}
