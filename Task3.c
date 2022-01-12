#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main(){
int N,K;

printf("Enter N: ");
scanf("%d",&N);
fflush(stdin);

printf("Enter K: ");
scanf("%d",&K);	
fflush(stdin);

float *startArray;
startArray = (float*)malloc(N*sizeof(float));  // Dynamic array

printf("Enter float digit >10 and <100\n");
for(int i = 1; i<=N; i++)
{
printf("startArray[%d] = ",i);
scanf("%f",&startArray[i]);
}

for(int i = 1; i<=N; i++)
{
printf("%2.5f ",startArray[i]);
}

printf("\n\n\n");

float* finishArray;
finishArray = (float*)malloc((N-1)*sizeof(float));

for(int i = 1,j = 1; i<=N; i++,j++)
{
if (i == K)
	i++;
finishArray[j] = startArray[i];
}

for(int i = 1; i<=N-1; i++)
{
printf("%2.5f ",finishArray[i]);
}

free(startArray);
free(finishArray);
return 0;	
}
