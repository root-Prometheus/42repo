#include <unistd.h>

void repeat_alpha(char *c)
{
	int repeat,i,x;
	repeat = 1;
	i = 0;
	x = 0;

	while (c[x] != '\0')
	{
		if (c[x] >= 'a' && c[x] <= 'z')
			repeat = c[x] - 96;
		else if (c[x] >= 'A' && c[x] <= 'Z')
			repeat = c[x] - 64;
		i = 0;
		while (i < repeat)
		{
			write(1,&c[x],1);
			i++;
		}
		x++;
		repeat = 1;
	}
}
int		main(int argc, char **argv)
{
	int i,x;
	i = 1;
	x = 0;
	if (argc > 1)
	{
		while (i < argc)
		{
			repeat_alpha(argv[i]);
			i++;
		}
		if (argv[1][0] == '\0')
			write(1,"\n",1);
	}
	else
	{
		write(1,"\n",1);
	}
	write(1,"\n",1);	
	return (0);
}
