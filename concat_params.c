/*
** EPITECH PROJECT, 2019
** concat_params
** File description:
** Task 02
*/

#include <stdlib.h>

int my_strlen(char const *str);
int my_putstr(char const *str);

int find_strings_size(int argc, char **argv)
{
    int i = 0;
    int j = 0;

    while (i < argc) {
        for (int a = 0; a < my_strlen(argv[i]); a++)
            j = j + 1;
        i++;
    }
    return (j);
}

char backslash_or_not(int i, int argc, char *dest, int dest_position )
{
    if (i != argc)
        dest[dest_position] = '\n';
    else
        dest[dest_position] = '\0';
}

char *concat_params(int argc, char **argv)
{
    int i = 0;
    int array_position = 0;
    int dest_position = 0;
    int count_down = 0;
    char *dest = malloc(find_strings_size(argc, argv) * sizeof(char));

    while (i != argc) {
        count_down = 0;
        while (my_strlen(argv[array_position]) > count_down) {
            dest[dest_position] = argv[array_position][count_down];
            count_down++;
            dest_position++;
        }
        i++;
        backslash_or_not(i, argc, dest, dest_position);
        array_position++;
        dest_position++;
    }
    return (dest);
}
