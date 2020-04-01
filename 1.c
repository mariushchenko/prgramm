#include <stdioh.h>
#include "3.h"
#define SIZE 100

int main()
	{  
        char a[SIZE], b[SIZE], c[SIZE];
        int i1, i2;

		printf("Start the Programm!\n")
			first_function();
				fprintf(stdout, "Input the first word for today please: ")
				fscanf(stdin, "%s", a);
				printf("\n");
				fprintf(stdout, "Second word is: ");
				fscanf(stdin, "%s", b);
				printf("\n");
				fprintf(stdout, "The last word is: ");
				fscanf(stdin, "%s", c);
				printf("\n");
			second_function(a,b,c);
				fprintf(stdout, "Input first number: \n");
				fscanf(stdin, "%i", &i1);
				fprintf(stdout, "Input the second number please: \n");
				fscanf(stdin, "%i", &i2);
			third_function(i1, i2);

	}