/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memaddress.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lede-gui <lede-gui@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 02:16:17 by lede-gui          #+#    #+#             */
/*   Updated: 2023/10/11 02:36:41 by lede-gui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main()
{
	char	str[] = "Batata";
	int	arr[] = {1, 2, 3, 4, 5, 6};

	printf("For the str\n->%s\n\n", str);
	printf("Hex address: %p		Decimal Address: %lu\n\n", str, (unsigned long)str);
	int	i = 0;
	while (str[i]) {
		printf("str[%i]: %c --> %lu\n", i, str[i], (unsigned long)&str[i]);
		i++;
	}
	printf("Variable size: %lu bytes\nString size: %lu\n", sizeof(char), sizeof(str));
	i = 0;
	printf("\n\nFor the array\n-> {1, 2, 3, 4, 5, 6}\n\n");
	printf("Hex address: %p		Decimal Address: %lu\n\n", arr, (unsigned long)arr);
	while (i < sizeof(arr) / sizeof(int))
	{
		printf("Arr[%i]: %i --> %lu\n", i, arr[i], (unsigned long)&arr[i]);
		i++;
	}
	printf("Variable size: %lu bytes\nArray size: %lu\n", sizeof(int), sizeof(arr));
}
