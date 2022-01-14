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

int minSum = 0;
int index = -1;
for(int i = 0; i < M; i++)
{
	int temp = 0;
	for(int j = 0; j < N; j++)
	{
		temp+=array[i][j];
	}
	if(temp < minSum || i == 0)
	{
		index = i;
		minSum = temp;
	}	
}

printf("\nIndex of the string with minimum sum = %d; and value is %d\n",index,minSum);

return 0;
}
