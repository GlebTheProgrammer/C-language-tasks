#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){

char string[100];
printf("Please, enter the string:\n");
fgets(string,100,stdin);
fflush(stdin);

int count = 0;
for(int i = 0; i < 100; i++)
{
	if (string[i+1] == '\0') // \n position
		break;
	if(string[i] != ' ' && !islower(string[i]) && !isdigit(string[i]))
		count++;
}

printf("The amount of big letters is %d\n",count);

return 0;
}
