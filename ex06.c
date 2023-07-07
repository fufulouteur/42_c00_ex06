#include <unistd.h>

void	ft_putchar(char c)
{
    write(1, &c, 1);
}

void	print_int(int i)
{
    ft_putchar(48 + i);
}

void	ft_print(int a, int b)
{
    print_int(a / 10);
    print_int(a % 10);
    ft_putchar(' ');
    print_int(b / 10);
    print_int(b % 10);
    if (a != 98)
        write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
    int a;
    int b;

    a = 0;
    b = 1;
    while (a < 99)
    {
        while (b < 100)
        {
            ft_print(a, b);
            b++;
        }
        a++;
        b = a + 1;
    }
}