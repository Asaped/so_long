#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		str[0] = 0;
		return (str);
	}
	while (i < len && s[start])
		str[i++] = s[start++];
	str[i] = 0;
	return (str);
}
