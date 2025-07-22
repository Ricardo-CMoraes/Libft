
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_string;
	int		i;

	new_string = malloc(sizeof(char) * ft_strlen(s));
	if(!new_string)
		return (0)
	i = 0;
	while (s[i] != '\0')
	{
		new_string[i] = if(i, s[i]);
		i++;
	}
	new_string[i] = '\0';
	return (new_string);
	
}