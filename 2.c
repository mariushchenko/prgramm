#include <stdio.h>
#define SUM(a,b,c) (a+b)*c

void first_function()
{
	char answer;
    fprintf(stdout, "Do you want to get dressed?\n");
    fscanf(stdin, "%c" &answer);

    	if(answer == 'n')
    		return;
    	else if (answer == 'y')
    		fprintf(stdout, "Look something to get dress!\n")
    	else
    		return;

}


void second_function(char str[], char str2[], char str3[])
{
   fprintf(stdout, "The new words for today are:\n %s\n%s\n%s\n", str, str2, str3);

}

int third_function(int num1, int num2)
{  
	int num3 = 2; int result;
	result= SUM(num1,num2,num3);
	return result;
}