/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 15:40:08 by yaidriss          #+#    #+#             */
/*   Updated: 2022/05/15 16:57:00 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char);

void ft_print_last(int x)
{
	int i;
	i = 0;
		if(x == 1)
	{
		ft_putchar('C');
		ft_putchar('\n');
	}
	else
	{	
  	ft_putchar('C');
  	while(i++ < x -2)
   		ft_putchar('B');
  	ft_putchar('A');
  	ft_putchar('\n');
	}
}

void ft_print_first(int x)
{
  int i;
  i = 0;
  	if(x == 1)
	{
		ft_putchar('A'); 
		ft_putchar('\n'); 
	}
	else
	{	
	ft_putchar('A');
	while(i++ < x -2)
		ft_putchar('B');
	ft_putchar('C');
	ft_putchar('\n');
	}
}

void ft_print_line(int x)
{
  int i;
  i = 0;
	if(x == 1)
	{
		ft_putchar('B'); 
		ft_putchar('\n'); 
	}
	else
	{	
	ft_putchar('B');
	while(i++ < x -2)
	ft_putchar(' ');
	ft_putchar('B');
	ft_putchar('\n');
	}
}

void rush(int x, int y)
{
	int i;
	if ( y >= 1)
	{
  		i = 1;
  		ft_print_first(x);
  		while(i++ <= y - 2)
    		ft_print_line(x);
  		ft_print_last(x);
 	}
}