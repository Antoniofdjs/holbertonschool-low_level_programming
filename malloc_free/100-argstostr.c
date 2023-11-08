#include "main.h"
#include <stdlib.h>
#include <string.h>

char *argstostr(int ac, char **av)
{
    char *result;
    int total_length = 0;
    int index = 0;
    int i, j;

    if (ac == 0 || av == NULL)
        return (NULL);

    for (i = 0; i < ac; i++) {
        total_length += strlen(av[i]);
    }

    result = malloc(total_length + ac + 1);
    if (result == NULL)
        return (NULL);

    for (i = 0; i < ac; i++) {
        for (j = 0; av[i][j] != '\0'; j++) {
            result[index++] = av[i][j];
        }

        if (i < ac - 1) {
            result[index++] = '\n';
        } else {
            result[index++] = '\n';
        }
    }

    result[index] = '\0';
    return result;
}
