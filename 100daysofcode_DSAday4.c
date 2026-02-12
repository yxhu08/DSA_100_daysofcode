/*Problem: Given an array of n integers, reverse the array in-place using two-pointer approach.

Input:
- First line: integer n
- Second line: n space-separated integers

Output:
- Print the reversed array, space-separated

Example:
Input:
5
1 2 3 4 5

Output:
5 4 3 2 1

Explanation: Swap pairs from both ends: (1,5), (2,4), middle 3 stays*/
//two pointer approach is basically reversing an array using two varuables and reversing means not traversing in backward direction bu actually cchanging position of the elemennt within 
//swapping is always dopone right to left
#include<stdio.h>
void reverse(int n,int arr[])
{
	int i,j,temp;
	for(i=0,j=n-1;i<j;i++,j--)//double pointer approach
	{
	    temp=arr[j];
	    arr[j]=arr[i];
	    arr[i]=temp;
	}
}
int main()
{
	int i,j,n;
	printf("enter size of the array:");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		printf("enter elements");
		scanf("%d",&arr[i]);
	}
	//reverse=reverse(n,arr);//returns nothing so cannot assign to something
	reverse(n,arr);
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
}
