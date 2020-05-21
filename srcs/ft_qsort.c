/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_qsort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstreet <fstreet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 09:55:34 by fstreet           #+#    #+#             */
/*   Updated: 2020/01/18 10:18:19 by fstreet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void	replace(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void		ft_qsort(int *arr, int first, int last)
{
	int	left;
	int	right;
	int	middle;

	if (first < last)
	{
		left = first;
		right = last;
		middle = arr[(left + right) / 2];
		while (left <= right)
		{
			while (arr[left] < middle)
				left++;
			while (arr[right] > middle)
				right--;
			if (left <= right)
			{
				replace(&arr[left], &arr[right]);
				left++;
				right--;
			}
		}
		ft_qsort(arr, first, right);
		ft_qsort(arr, left, last);
	}
}
