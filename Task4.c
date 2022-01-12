#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
char startString[100];
char finishString[100];
char temp[20];

printf("Please, enter the string:\n");
fgets(startString,100,stdin);
fflush(stdin);

for(int i=0,k=0,j=0;i<100;i++,j++)
{
	if (startString[i] == '\0')
	{
		finishString[k-1]='\0';
		break;
	}

	if (startString[i] != ' ' && i+1 != 100 && startString[i+1] != '\0')
		temp[j]=startString[i];
	else
	{
		int isIdentificator = 0;
		for(j = 0; j < 20;j++)
		{
			if (temp[j] == '\0')
				break;
				
			if (!isdigit(temp[j]))
			{
				isIdentificator = 1;
				break;
			}
		}
		if (!isIdentificator)
		{
			for(j = 0; j < 20;j++,k++)
			{
				if (temp[j] == '\0')
					break;
					
				finishString[k]=temp[j];
			}
			finishString[k]=',';
			k++;
		}
		
		for(j = 0; j < 20;j++)
			temp[j]='\0';	
		j=-1;
	}
}
printf("\nThe final string is:\n");
puts(finishString);

}
