#include<stdio.h>
#include<string.h>
int main()
{
	struct student{
		char name[100];
		int rollno;
		int clas;
	}s1;
	printf("enter name \n");
	scanf("%[^\n]",&s1.name);
	
	printf("enter roll no \n");
	scanf("%d",&s1.rollno);
	
	printf("enter class \n");
	scanf("%d",&s1.clas);
	
	printf("your details are \nname=%[^\n]\nroll no=%d\nclass=%d\n");
	
	
	return 0;
}
