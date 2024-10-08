/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instraction.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobourai <yobourai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 23:03:01 by yobourai          #+#    #+#             */
/*   Updated: 2024/09/23 23:11:19 by yobourai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_to_stack(t_stack *src, t_stack *dst)
{
	dst->size++;
	dst->top++;
	dst->arr[dst->top] = src->arr[src->top];
	src->size--;
	src->top--;
}

void	pa(t_stack *a, t_stack *b)
{
	if (!b->size)
		return ;
	push_to_stack(b, a);
	write(1, "pa\n", 3);
}

void	pb(t_stack *a, t_stack *b)
{
	if (!a->size)
		return ;
	push_to_stack(a, b);
	write(1, "pb\n", 3);
}
