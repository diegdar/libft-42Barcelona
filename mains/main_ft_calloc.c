#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Para bzero o memcmp si fuera necesario

int main(void)
{
    // 1. DECLARACIONES (Al inicio, con tabuladores de la Norma)
    void    *p1;
    void    *p2;
    size_t  count;
    size_t  size;
    size_t  i;
    size_t  errors;

    count = 10;
    size = sizeof(int);

    // 2. EJECUCIÓN
    p1 = ft_calloc(count, size);
    p2 = calloc(count, size);

    // 3. LOGICA DE COMPROBACIÓN
    if (!p1 || !p2)
    {
        // Manejar error de reserva
        return (1);
    }

    // Comprobar si son ceros
    i = 0;
    errors = 0;
    while (i < (count * size))
    {
        if (((unsigned char *)p1)[i] != 0)
        {
            printf("❌ Error en posición %d: se esperaba 0, se encontró %d\n", i, str[i]);
            errors++;
        }
        i++;
    }

    // 4. LIMPIEZA
    if (errors == 0)
        printf("✅ Test de limpieza: PASADO\n");
    free(p1);
    free(p2);
    return (0);
}
