#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
size_t	ft_strlen(const char *c);
char	*ft_memset(void *b, int c, size_t len);
void	*ft_calloc(size_t count, size_t size);
int		ft_putstr_fd(char *s, int fd);
int		ft_atoi(const char *str);
int		ft_isdigit(int c);
void	*ft_memcpy(void *dst, const void *src, size_t n);
#endif
