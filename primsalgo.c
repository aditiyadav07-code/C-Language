#include<stdio.h>
#define MAX 10
int main()
{
	int a[MAX][MAX];
	int visited[MAX], min;
	int u=0, v=0, total=0;
	int n, i, j, count;
	printf("\nEnter number of vertices: ");
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		visited[i]=0;
		for(j=0; j<n; j++)
		{
			printf("\nEnter value of matrix[%d][%d]: ", i, j);
			scanf("%d", &a[i][j]);
			if(a[i][j]==0)
			{
				a[i][j]=999;
			}
		}
	}
	
	visited[0]=1;
	for(count=0; count<n-1; count++)
	{
		min=999;
		for(i=0; i<n; i++)
		{
			if(visited[i]==1)
			{
				for(j=0; j<n; j++)
				{
					if(visited[j]!=1)
					{
						if(min>a[i][j])
						{
							min=a[i][j];
							u=i;
							v=j;
						}
					}
				}
			}
		}
		visited[v]=1;
		total=total+min;
		printf("\nMin edge found at %d -> %d with weight: %d ", u, v, min);
	}
	printf("\nCost of MST: %d", total);
	
	return 0;
}