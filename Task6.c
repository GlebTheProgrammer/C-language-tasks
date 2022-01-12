#include <stdio.h>
#include <stdlib.h>

int main(){
int N;
printf("Enter number of array's digits: ");
scanf("%d",&N);
fflush(stdin);

int array[N];

for(int i = 0; i<N; i++)
{
	printf("array[%d] = ",i);
	scanf("%d",&array[i]);
}

int min1;
int min2;

for(int i = 0; i<N; i++)
{
	if(i == 0)
	{
		min1 = array[i];
		continue;
	}
	if(i == 1)
	{
		min2 = array[i];
		continue;
	}
	if(array[i]<min1 && min1>=min2)
	{
		min1 = array[i];
		continue;
	}
	else
	{
		if(array[i]<min2)
		{
			min2 = array[i];
			continue;
		}
	}
}

printf("\nmin1 = %d min2 = %d\n",min1,min2);

return 0;
}
