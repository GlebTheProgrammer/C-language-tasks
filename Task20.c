#include <stdio.h>
#include <stdlib.h>

int main(){

int N;
printf("N = ");
scanf("%d",&N);
fflush(stdin);

int *array = (int*)malloc(sizeof(int));

for(int i = 0; i < N; i++)
{
	printf("array[%d] = ",i);
	scanf("%d",&array[i]);
}

int minChet = -1;

for(int i = 0; i < N; i++)
{
	if (array[i] % 2 == 0 && (array[i] < minChet || minChet == -1))
	{
		minChet = array[i];
	}
}

if(minChet == -1)
	printf("\nno\n");
else
	printf("\nMinimal chet digin is %d\n",minChet);
	
free(array);


return 0;
}
