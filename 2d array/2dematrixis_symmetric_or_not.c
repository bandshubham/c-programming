//10. Write a C program to check whether given matrix is symmetric or not.

#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[20][20];
	int arr2[20
	][20];
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
          arr2[j][i]=arr[i][j];			
		}
		
	}
	

	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(arr[i][j]!=arr2[i][j])
			{	
		    flag=1;
			break;
			}
		}
	}


	if(flag==1)
		printf("given matrix is not an symmetric matrix");
	else
		printf("given matrix is an symmetric matrix");

	getch();
}