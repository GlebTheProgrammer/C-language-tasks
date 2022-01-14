#include <stdio.h>
#include <stdlib.h>

int main(){

int M;
printf("M = ");
scanf("%d",&M);
fflush(stdin);

int N;
printf("N = ");
scanf("%d",&N);
fflush(stdin);

int array[M][N];

for(int i = 0; i < M; i++)
{
	for(int j = 0; j < N; j++)
	{
		printf("array[%d][%d] = ",i,j);
		scanf("%d",&array[i][j]);
	}
}

int maxSum = 0;
int index = -1;
for(int j = 0; j < N; j++)
{
	int temp = 0;
	for(int i = 0; i < M; i++)
	{
		temp+=array[i][j];
	}
	if(temp > maxSum || j == 0)
	{
		index = j;
		maxSum = temp;
	}	
}

printf("\nIndex of the column with maximum sum = %d; and value is %d\n",index,maxSum);

return 0;
}
