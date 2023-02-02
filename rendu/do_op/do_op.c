#include <unistd.h>
void ft_putchar(int x)
{
    if(x > 9)
        ft_putchar(x / 10);
    write(1,&"0123456789"[x % 10],1);
}

int main(int argc,char **argv)
{
    int i,x,z,c;
    i = 0;
    x = 0;
    z = 0;
    c = 0;
    if (argc == 4)
    {
       while (argv[1][i])
       {
            if(argv[1][i] != '-')
                x = (x * 10 + (argv[1][i] - '0'));
            i++;
       }
       if(argv[1][0] == '-')
            x = x * - 1;
       i = 0;
       z = 0;
       while (argv[3][i])
       {
            if(argv[3][i] != '-')
               c = (c * 10 + (argv[3][i] - '0'));
            i++;
       }
       if(argv[3][0] == '-')
            c = c * - 1;
       z = 0;
       if (argv[2][0] == '+')
       {
            z = x + c;
            if (z < 0)
            {
                z = z * -1;
                write(1,"-",1);
            }
            ft_putchar(z);
       }
            
       if (argv[2][0] == '-')
       {
            z = x - c;
            if (z < 0)
            {
                z = z * -1;
                write(1,"-",1);
            }
           
            ft_putchar(z);
       }
            
       if (argv[2][0] == '/')
       {
            z = x / c;
            if (z < 0)
            {
                z = z * -1;
                write(1,"-",1);
            }
            ft_putchar(z);
       }
       if (argv[2][0] == '*')
       {
            z = x * c;
            if (z < 0)
            {
                z = z * -1;
                write(1,"-",1);
            }
            ft_putchar(z);
       }
       else if (argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*' && argv[2][0] != '/')
            write(1,"0",1);
       write(1,"\n",1);
        return 0;
    }
    write(1,"\n",1);
}
