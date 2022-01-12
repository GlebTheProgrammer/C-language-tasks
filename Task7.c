#include <stdio.h>
#include <stdlib.h>

int main(){

char symbol;
char string[100];

printf("\nEnter the string:\n");
fgets(string,100,stdin);
fflush(stdin);

printf("symbol = ");
//scanf("%c",&symbol);
//symbol = getc(stdin);
symbol = getchar();
fflush(stdin);

int symbolCount = 0;
int allSymbolsCount = 0;

for(int i = 0; i<100; i++)
{
	if (string[i+1] == '\0') // +1 because there is ENTER symbol in the end, which we dont need to count
		break;
	if ((char)string[i] == (char)symbol)
		symbolCount++;
	allSymbolsCount++;
}

printf("%d %d",symbolCount,allSymbolsCount);
float percents = ((float)symbolCount*100)/allSymbolsCount;
printf("\nPercent ratio is %2.1f\n",percents);

return 0;
}
