#include "libft.h"
#include <stdio.h>
#include <string.h>

static void test_fn(const char *s, char *test_name)
{
	char	*s_copy;

	s_copy = ft_strdup(s);

	if (s_copy)
	{
		printf("\n✅ Se copio correctamente el string");
		printf("\nString fuente> puntero: %p, valor: %s\n", s, *s);
		printf("\nString copia> puntero: %p, valor: %s\n", s_copy, *s_copy);
	}
	else
		printf("❌ Error: hubo un error al tratar de hacer la copia");
} 

int	main(void)
{
	printf("\n=========================================");
	printf("\n       DEBUG FT_STRDUP - 42BARCELONA     ");
	printf("\n=========================================\n");

	char	*s;

	s = "bar";
	test_fn(s, "paso de un string de 3 bytes");

	printf("\n=========================================\n");
	return (0);
}
