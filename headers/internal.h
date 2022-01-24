/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   internal.h                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sappunn <sappunn@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/10 21:30:39 by sappunn       #+#    #+#                 */
/*   Updated: 2021/12/10 21:30:39 by sappunn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERNAL_H
# define INTERNAL_H
# include <stdlib.h>

typedef struct s_stack
{
	struct s_stack	*next;
	struct s_stack	*prev;
	int				value;
}	t_stack;

typedef struct s_stack_data
{
	t_stack	**top;
	int		len;
}	t_stack_data;

void			sa(t_stack_data *a);
void			sb(t_stack_data *b);
void			ss(t_stack_data *a, t_stack_data *b);
int				pa(t_stack_data *a, t_stack_data *b);
int				pb(t_stack_data *a, t_stack_data *b);
void			ra(t_stack_data *a);
void			rb(t_stack_data *b);
void			rr(t_stack_data *a, t_stack_data *b);
void			rra(t_stack_data *a);
void			rrb(t_stack_data *b);
void			rrr(t_stack_data *a, t_stack_data *b);

t_stack_data	*ft_get_stack(char **nums, t_stack_data	*x);
int				ft_is_sorted(t_stack_data *x);
int				ft_is_ordered(t_stack_data *x);
void			small_sort(t_stack_data *a);
void			med_sort(t_stack_data *a, t_stack_data *b);
void			*util_free(void *ptr);
void			rotate_stack(t_stack_data *x, int rot);
void			fix_stack_order(t_stack_data *a);
void			make_consecutive(t_stack **top);

t_stack			*ft_stack_new(int value);
void			ft_stack_add_front(t_stack **top, t_stack *new);
void			ft_stack_add_back(t_stack **top, t_stack *new);
void			ft_stack_clear(t_stack **stack);
t_stack			*ft_stack_remove_top(t_stack **top);
#endif
