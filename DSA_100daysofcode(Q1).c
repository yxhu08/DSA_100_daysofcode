//Problem: Write a C program to insert an element x at a given 1-based position pos in an array of n integers. Shift existing elements to the right to make space.
#include<stdio.h>
int main()
{
	int i,n;
	printf("enter number of elements");
	scanf("%d",&n);
	int arr[n+1];//as need extra space thats why n+1 
	for(i=0;i<n;i++)
	{
		printf("enter elements");
		scanf("%d",&arr[i]);
	}
	//insertion
	int k;
	printf("enter position at which element need to be inserted");
	scanf("%d",&k);//it itself is taking index 2
	int num;
	printf("enter element to be inserted");
	scanf("%d",&num);
   for(i=n+1;i>k;i--)
   {
   	arr[i]=arr[i-1];//always do shifting from right to left
   }

	arr[k]=num;
	//array after insertion
	for(i=0;i<n+1;i++)
	{
		printf("%d",arr[i]);
	}
	}
