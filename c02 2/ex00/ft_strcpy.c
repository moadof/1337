/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 09:50:41 by lahammam          #+#    #+#             */
/*   Updated: 2021/09/27 10:04:46 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	c;
	int		i;

	c = 'a';
	i = 0;
	while (c != '\0')
	{
		c = *(src + i);
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
/*
int main()
{
	char src[] = "ahammmam";
	char dest[50];
	strcpy(dest,src);
    printf("src = %s et dest = %s \n",src,dest);
	char src1[] = "ahammam";
	char dest1[50];
	ft_strcpy(dest1,src1);
    printf("src1 = %s et dest1 = %s \n",src1,dest1);
}*/
