//13. Write a C program to check whether given matrix is Identity or not.

#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[20][20];
	int flag=0;
    int m,n;
	int i,j;
	int sum=0;

	printf("enter no of row\n");
	scanf("%d",&m);
	printf("enter no of columns\n");
	scanf("%d",&n);

	printf("Enter element in an matrix of m*n\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		scanf("%d",&arr[i][j]);
		}
	}
	
		printf("entered matrix is:\n");

	for(i=0;i<m;i++)
	{
		sum=0;
		for(j=0;j<n;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}




		
	

	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j && arr[i][j]!=1)
			{	
				
				flag=1;
				break;
			}
			if(i!=j&&arr[i][j]!=0)
			{
				flag=1;
				break;
			}
		}
	}


	if(flag==1)
		printf("given matrix is not an identity matrix");
	else
		printf("given matrix is an identity matrix");

	getch();
}
