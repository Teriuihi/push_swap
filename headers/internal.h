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

void	sa(int *a, int a_len);
void	sb(int *b, int b_len);
void	ss(int *a, int a_len, int *b, int b_len);
int		pa(int **a, int a_len, int **b, int b_len);
int		pb(int **a, int a_len, int **b, int b_len);
void	ra(int *x, int x_len);
void	rb(int *b, int b_len);
void	rr(int *a, int a_len, int *b, int b_len);
void	rra(int *a, int a_len);
void	rrb(int *b, int b_len);
void	rrr(int *a, int a_len, int *b, int b_len);

t_stack	**ft_get_stack(char **nums);
int		ft_is_sorted(t_stack **top);
int		*ft_change_size(int *arr, int ori_len, int new_len);
void	small_sort(int *arr, int len);
void	med_sort(int **arr, int len);
void	*util_free(void *ptr);
void	make_consecutive(t_stack **top);

t_stack	*ft_stack_new(int value);
void	ft_stack_add_front(t_stack **top, t_stack *new);
void	ft_stack_add_back(t_stack **top, t_stack *new);
void	ft_stack_clear(t_stack **stack);
#endif
