#include <stdio.h>
#include "main.h"

int main(int argc, char *argv[])
{
	int digit, numb, sum = 0;
	{
		for(digit = 0; argv[numb][digit]; digit++)
		{
			for(numb = 1; numb < argc; numb++)
			{
				if(argv[numb][digit] < '0' || argv[numb][digit] > '9')
				{
					printf("Error\n")
					return(1);
				}
		sum += aioi[numb];
	printf("%d\n", sum)
		return(0);
