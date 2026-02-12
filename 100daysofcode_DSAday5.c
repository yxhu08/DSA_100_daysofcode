/*Problem: A system receives two separate logs of user arrival times from two different servers. Each log is already sorted in ascending order. Your task is to create a single chronological log that preserves the correct order of arrivals.

Input:
- First line: integer p (number of entries in server log 1)
- Second line: p sorted integers representing arrival times from server 1
- Third line: integer q (number of entries in server log 2)
- Fourth line: q sorted integers representing arrival times from server 2)

Output:
- Print a single line containing all arrival times in chronological order, separated by spaces

Example:
Input:
5
10 20 30 50 70
4
15 25 40 60

Output:
10 15 20 25 30 40 50 60 70

Explanation: Compare the next unprocessed arrival time from both logs and append the earlier one to the final log until all entries are processed*/
#include<stdio.h>
void merge(int n1,int n2,int log1[],int log2[],int log3[])
{
	int i=0,j=0,k=0;
	while(i<n1&&j<n2)//bcz they should iterate less than size as per index 
	{
		if(log1[i]<log2[j])
		{
			log3[k++]=log1[i++];//ascending order
		}
		else
		{
			log3[k++]=log2[j++];
		}
	}
	while(i<n1)
	{
		log3[k++]=log1[i++];
	}
	while(j<n2)
	{
		log3[k++]=log2[j++];
	}
	return;
	
}
int main()
{
	int n1,n2;
	int i;
	printf("enter size of first log");
	scanf("%d",&n1);
	int log1[n1];
	for(i=0;i<n1;i++)
	{
		printf("enter elements");
		scanf("%d",&log1[i]);
	}
	printf("enter size of second log");
	scanf("%d",&n2);
	int log2[n2];
	for(i=0;i<n2;i++)
	{
		printf("enter elements");
		scanf("%d",&log2[i]);
	}
	int log3[n1+n2];
	merge( n1, n2, log1, log2,log3);
	for(i=0;i<n1+n2;i++)
	{
		printf("%d\t",log3[i]);
	}
}
