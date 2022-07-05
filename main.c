#include "include/ft_printf.h"
#include <stdio.h>

int main(void)
{
	
	const char blue[] = "\033[1;34m";
	const char red[] = "\033[1;31m";
	const char white[] = "\033[1;97m";
	int i;
	int size = 0;
	
	// Testing category c..
	char *characters = "-14s0";
	ft_printf("\033[1;33mTesting category c...\n");
	i = 0;
	while (i <= 5)
	{	
		ft_printf("%sft_printf: \n", blue);
		size = ft_printf("c= |%c|\n", characters[i]);
		ft_printf("size= %d\n", size);

		printf("%sprintf: \n", red);
		size = printf("c= |%c|\n", characters[i]);
		printf("size= %d\n", size);
		ft_printf("\n");
		i++;
	}

	// Testing category s..
	const char *string[5];
	string[0] = "42 Sao paulo, escola de engenharia de software! ";
	string[1] = "SP";
	string[2] = NULL;
	string[3] = "\0";
	string[4] = 0;

	ft_printf("\033[1;33mTesting category s...\n");
	i = 0;
	while (i < 5)
	{	
		ft_printf("%sft_printf: \n", blue);
		size = ft_printf("s= |%s|\n", string[i]);
		ft_printf("size= %d\n", size);

		printf("%sprintf: \n", red);
		size = printf("s= |%s|\n", string[i]);
		printf("size= %d\n", size);
		ft_printf("\n");
		i++;
	}


	// Testing category p..
	int n = 42;
	int *p = &n;
	ft_printf("\033[1;33mTesting category p...\n");	
	ft_printf("%sft_printf: \n", blue);
	size = ft_printf("p= |%p|\n", p);
	ft_printf("size= %d\n", size);

	printf("%sprintf: \n", red);
	size = printf("p= |%p|\n", p);
	printf("size= %d\n", size);
	ft_printf("\n");

	char *s = "I am 42!";
	ft_printf("%sft_printf: \n", blue);
	size = ft_printf("p= |%p|\n", s);
	ft_printf("size= %d\n", size);

	printf("%sprintf: \n", red);
	size = printf("p= |%p|\n", s);
	printf("size= %d\n", size);
	ft_printf("\n");

	char *p1 = 0;
	ft_printf("%sft_printf: \n", blue);
	size = ft_printf("p= |%p|\n", p1);
	ft_printf("size= %d\n", size);

	printf("%sprintf: \n", red);
	size = printf("p= |%p|\n", p1);
	printf("size= %d\n", size);
	ft_printf("\n");


// Testing category d and i..
	int numbers[5];
	numbers[0] = 2147483647;
	numbers[1] = -1;
	numbers[2] = 0;
	numbers[3] = -2147483648;
	numbers[4] = 42;

	ft_printf("\033[1;33mTesting category d and i...\n");
	i = 0;
	while (i < 5)
	{	
		ft_printf("%sft_printf: \n", blue);
		size = ft_printf("n and i= |%d|\n", numbers[i]);
		ft_printf("size= %d\n", size);

		printf("%sprintf: \n", red);
		size = printf("n and i= |%d|\n", numbers[i]);
		printf("size= %d\n", size);
		ft_printf("\n");
		i++;
	}
	

	// Testing category x and X..
	int numbers1[5];
	numbers1[0] = 2483647;
	numbers1[1] = -1;
	numbers1[2] = 0;
	numbers1[3] = -2147648;
	numbers1[4] = 255;

	ft_printf("\033[1;33mTesting category x and X...\n");
	i = 0;
	while (i < 5)
	{	
		ft_printf("%sft_printf: \n", blue);
		size = ft_printf("number= %d convert= |%x|\n", numbers1[i], numbers1[i]);
		ft_printf("size= %d\n", size);

		printf("%sprintf: \n", red);
		size = printf("number= %d convert= |%x|\n", numbers1[i], numbers1[i]);
		printf("size= %d\n", size);
		ft_printf("\n");

		ft_printf("%sft_printf: \n", blue);
		size = ft_printf("number= %d convert= |%X|\n", numbers1[i], numbers1[i]);
		ft_printf("size= %d\n", size);

		printf("%sprintf: \n", red);
		size = printf("number= %d convert= |%X|\n", numbers1[i], numbers1[i]);
		printf("size= %d\n", size);
		ft_printf("\n");
		i++;
	}

	// Testing category %..
	int numbers2[3];
	numbers2[0] = 50;
	numbers2[1] = 100;
	numbers2[2] = 42;
	

	ft_printf("\033[1;33mTesting category % \n");
	i = 0;
	while (i < 3)
	{	
		ft_printf("%sft_printf: \n", blue);
		size = ft_printf("%%= |%d%%|\n", numbers2[i]);
		ft_printf("size= %d\n", size);

		printf("%sprintf: \n", red);
		size = printf("%%= |%d%%|\n", numbers2[i]);
		printf("size= %d\n", size);
		ft_printf("\n");
		i++;
	}

	printf("%s", white);
	return (0);
}