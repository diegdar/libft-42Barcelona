#include "libft.h"
#include <stdio.h>

void	f_print_result(char *big, char *little, char *result, size_t n)
{
	printf("**valor de big: %.*s\n", (int)n, big);
	printf("**valor de little: %s\n", little);
	printf("**valor de n: %zu\n", n);

	if (result)
	{
		printf("El valor de result es: %s\n\n:", result);
	}
	else
	{
		printf("El valor de 'result' es: NULL\n\n");
	}
}

int	main(void)
{
	char	*big;
	char	*little;
	size_t	n;
	size_t	big_len;
	char	*result;

	big = "Foo Bar Baz";
	big_len = ft_strlen(big);
//	p3 = "luismi";

	printf("\n>>Se DEBERIA Encontrar little en la primera posicion de big, buscando en todos los bytes de big\n");
	little = "Foo";
	n = big_len;
	result = ft_strnstr(big, little, n);
	f_print_result(big, little, result, n);	

	printf("\n>>NO Se DEBERIA Encontrar little(retornara NULL) porque no coinciden todos los caracteres de busqueda\n");
	little = "For";
	n = big_len;
	result = ft_strnstr(big, little, n);
	f_print_result(big, little, result, n);	

	printf(">>Se DEBERIA Encontrar little pero NO en las primeras posiciones de big, buscando en todos los bytes de big\n");
	little = "Bar";
	n = big_len;
	result = ft_strnstr(big, little, n);
	f_print_result(big, little, result, n);	
	
	printf(">>No se DEBERIA Encontrar little(retornara NULL) a pesar de encontrarse en big porque en los primero ccaracteres de 'n' no se encuentra\n");
	little = "Bar";
	n = 4;
	result = ft_strnstr(big, little, n);
	f_print_result(big, little, result, n);

	printf(">>Si no se encuentra little en big se DEBERIA devolver NULL,Buscando en todos los bytes de big\n");
	little = "no_found";
	n = big_len;
	result = ft_strnstr(big, little, n);
	f_print_result(big, little, result, n);	

	printf(">>Si little es un string vacio, se DEBERIA devolver big entero(todos sus caracteres)\n");
	little = "";
	n = big_len;
	result = ft_strnstr(big, little, n);
	f_print_result(big, little, result, n);	

	return (0);
}
