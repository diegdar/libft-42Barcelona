#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	f_print_result(const char *str, int ft_result, int result_oficial)
{
	printf("**valor del string : %s\n", str);
	printf("**valor devuelto por atoi(): %d\n", result_oficial);
	printf("**valor devuelto por ft_atoi(): %d\n\n", ft_result);
}

int	main(void)
{
	const char	*str;
	int		ft_result;
	int		result_oficial;

	str = "42";
	ft_result = ft_atoi(str);
	result_oficial = atoi(str);
	f_print_result(str, ft_result, result_oficial);
	
	str = "42abc";
	ft_result = ft_atoi(str);
	result_oficial = atoi(str);
	f_print_result(str, ft_result, result_oficial);
	
	printf("\n>>Numeros al inicio y al final con letras en medio\n");
	str = "42abc24";
	ft_result = ft_atoi(str);
	result_oficial = atoi(str);
	f_print_result(str, ft_result, result_oficial);

	printf("\n>>caracteres antes de numeros\n");
	str = "abc42";
	ft_result = ft_atoi(str);
	result_oficial = atoi(str);
	f_print_result(str, ft_result, result_oficial);	
	
	printf("\n>>Paso de caracteres no imprimibles  antes de un numero\n");
	str = " \t\n\f\r42";
	ft_result = ft_atoi(str);
	result_oficial = atoi(str);
	f_print_result(str, ft_result, result_oficial);

	printf("\n>>DEBERIA mostrar numeros negativos\n");
	str = "-42";
	ft_result = ft_atoi(str);
	result_oficial = atoi(str);
	f_print_result(str, ft_result, result_oficial);

/*
	printf("\n>>DEBERIA devolver 42 cuando se le pasa '+42'\n");
	str = "+42";
	ft_result = ft_atoi(str);
	result_oficial = atoi(str);
	f_print_result(str, ft_result, result_oficial);

	printf("\n>>si hay 2 signos negativos '--'DEBERIA devolver un error(0)\n");
	str = "--42";
	ft_result = ft_atoi(str);
	result_oficial = atoi(str);
	f_print_result(str, ft_result, result_oficial);
	
	printf("\n>>DEBERIA devolver 42 cuando se le pasa '+42'\n");
	str = "+42";
	ft_result = ft_atoi(str);
	result_oficial = atoi(str);
	f_print_result(str, ft_result, result_oficial);

	printf("Que pasa si pasamos un valor mas alla del maximo de un INT?\n>>\n");
	str = "42";
	ft_result = ft_atoi(str);
	result_oficial = atoi(str);
	f_print_result(str, ft_result, result_oficial);

	printf("Que pasa si pasamos un valor mas alla del minimo de un INT?\n>>\n");
	str = "42";
	ft_result = ft_atoi(str);
	result_oficial = atoi(str);
	f_print_result(str, ft_result, result_oficial);

	printf("Que pasa si pasamos solo espacios "   "\n>>\n");
	str = "42";
	ft_result = ft_atoi(str);
	result_oficial = atoi(str);
	f_print_result(str, ft_result, result_oficial);
*/
	return (0);
}
