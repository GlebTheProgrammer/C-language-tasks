#include <stdio.h>
#include <stdlib.h>

int main(){

char startString[100];
char finishString[100];
char symbol;

printf("Enter the string:\n");
fgets(startString,100,stdin);
fflush(stdin);

printf("\nEnter the symbol:\n");
scanf("%c",&symbol);
fflush(stdin);

for(int i=0,j=0;i<100;i++)
{
	if(startString[i+1] == '\0')
		break;
	if(startString[i] != symbol)
	{
		finishString[j] = startString[i];
		j++;
	}
}

printf("\nThe result string is: \n");
puts(finishString);
return 0;
}
