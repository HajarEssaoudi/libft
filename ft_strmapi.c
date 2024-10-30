#include <stdlib.h>

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*mapi;
	unsigned int	i;
	unsigned int	k;

	i = 0;
	k = 0;
	mapi = malloc(ft_strlen(s) + 1);
	if (!mapi)
		return (NULL);
	while (s[i])
	{
		mapi[k] = f(i, s[i]);
		i++;
		k++;
	}
	mapi[k] = '\0';
	return (mapi);
}

char f(unsigned int index, char c)
{
	c = 'a';
	return(c);
}
#include <stdio.h>
int main()
{
	int i = 0;
	char s[6] = "hajar";
	char *mpi = ft_strmapi(s, &f);
	
	printf("%s\n", mpi);
}