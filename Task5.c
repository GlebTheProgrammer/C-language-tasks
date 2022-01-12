#include <stdio.h>
#include <stdlib.h>

int main(){
int N;
printf("N = ");
scanf("%d",&N);
fflush(stdin);

int digit = 2;
int result = 1;

for(int i = 1; i<=N; i++)
{
	printf("2^%d = ",i);
	for(int j = 1; j<=i; j++)
	{
		result*=digit;
	}
	printf("%d\n",result);
	result=1;
}

return 0;
}
