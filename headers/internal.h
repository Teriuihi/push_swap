#ifndef INTERNAL_H
# define INTERNAL_H
# include <stdlib.h>
int		*ft_get_stack1(char **args, int len);
int		ft_is_sorted(int *arr, int len);
int		*ft_change_size(int *arr, int ori_len, int new_len);
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

void	small_sort(int *arr, int len);
#endif
