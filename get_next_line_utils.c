
#include "get_next_line.h"

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	while (s[count])
		count++;
	return (count);
}

char	*ft_strchr(const char *s, int c)
{
	size_t	index;

	index = 0;
	while (s[index])
	{
		if (s[index] == (char)c)
			return ((char *)&s[index]);
		index++;
	}
	if ((char)c == '\0')
		return ((char *)&s[index]);
	return (0);
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	index;

	if (dst == src)
		return (dst);
	index = 0;
	while (index < n)
	{
		((char *)dst)[index] = ((char *)src)[index];
		index++;
	}
	return (dst);
}