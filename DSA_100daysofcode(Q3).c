/*Problem: Write a C program to delete the element at a given 1-based position pos from an array of n integers. Shift remaining elements to the left.

Input:
- First line: integer n
- Second line: n space-separated integers
- Third line: integer pos (1-based position to delete)

Output:
- Print the updated array with (n-1) elements, space-separated

Example:
Input:
5
10 20 30 40 50
2

Output:
10 30 40 50

Explanation: Delete position 2 (element 20), remaining elements shift left*/
#include<stdio.h>
int main()
{
	int n,i;
	printf("enter number of elements");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		printf("enter elements");
		scanf("%d",&arr[i]);
	}
	int k;int num;
	printf("enter position at which element need to be inserted");
	scanf("%d",&k);
	for(i=k;i<n;i++)
	{
		arr[i]=arr[i+1];
	}
	n--;
	//Array after deletion
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	
	
}
//here if we even enter double digit number while running the programn we do get the right answer and remeneber compiler automatically works according to indexing 
