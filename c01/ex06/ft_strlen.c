/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsulvac <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 16:02:39 by fsulvac           #+#    #+#             */
/*   Updated: 2023/08/10 22:21:31 by fsulvac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str [i] != '\0')
		i++;
	return (i);
}

/*#include <stdio.h>
int main(void)
{	
	char	*s = "Je";
	int	i;

	i = ft_strlen(s);
	printf("%d", i);
	
}*/
