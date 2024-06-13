/*                                                                 /L'-,
            ▄████▄   ██▀███   ▄▄▄       ███▄ ▄███▓. .             /  L '-,
      .     ▒██▀ ▀█  ▓██ ▒ ██▒▒████▄    ▓██▒▀█▀ ██▒`..           /       '-,
      :     ▒▓█    ▄ ▓██ ░▄█ ▒▒██  ▀█▄  ▓██    ▓██░ ,<>         /_      '-,'
      ;     ▒▓▓▄ ▄██▒▒██▀▀█▄  ░██▄▄▄▄██ ▒██    ▒██,',.;      .-'* ;     .'
      |     ▒ ▓███▀ ░░██▓ ▒██▒ ▓█   ▓██▒▒██▒   ░█< ,; `.      )`--'    /
      |     ░ ░▒ ▒  ░░ ▒▓ ░▒▓░ ▒▒   ▓▒█░░ ▒░   ░  `  `. `.   /__,    ,'
      |     ░  ▒     ░▒ ░ ▒░  ▒   ▒▒ ░░  ░      ░      `. `-,_\     /
      |     ░          ░░   ░   ░   ▒   ░      ░         `./ .\----.___
      |     ░ ░         ░           ░  ░       ░           `.__) . .F. )-.
      |     ░                                               J . . . J-'-. `-.,
      |                                                     |. . . . \   `-.  F
      |                                                     F . . . . \     '`
      |     @github.com/cramhier                       __,-J . . . . . \
      |                                          __,--'    |. .__.----,'
      |     ***   ***                      __,--'          `.-;;;;;;;;;\
      |                              __,--'                 /;;;;;;;;;;;;.
      |                        __,--'                      /;;;;;;;;;;;;;;\
  \   |                  __,--'                            `--;;/     \;-'\
   \  |            __,--'                                  /  /         \  \
    \ |      __,--'                                       /  /           \  \
     \|__,--'                                         _,-;M-K,           ,;-;\
                                                     <;;;;;;;;           '-;;;;*/

#include "libft.h"
#include <stdio.h>

static	long	reversenbr(int nb)
{
	int		b;
	long	r;
	long	nb2;

	r = 0;
	b = 0;
	nb2 = nb;
	if (nb2 < 0)
		nb2 *= -1;
	while (nb2 > 0)
	{
		b = (nb2 % 10);
		r = r * 10 + b;
		nb2 /= 10;
	}
	return (r);
}

void	ft_putnbr_fd(int nb, int fd)
{
	int			b;
	long		a;

	a = reversenbr(nb);
	b = 0;
	if (nb == 0)
		write(fd, "0", 1);
	if (nb < 0)
		write(fd, "-", 1);
	while (a > 0)
	{
		b = (a % 10) + '0';
		write (fd, &b, 1);
		a /= 10;
	}
	while ((nb % 10) == 0 && nb != 0)
	{
		write(fd, "0", 1);
		nb = nb / 10;
	}
}
