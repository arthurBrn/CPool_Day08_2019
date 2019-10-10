/*
** EPITECH PROJECT, 2019
** concat_params
** File description:
** Task 02
*/

int my_strlen(char const *str);
int my_putstr(char const *str);

char *concat_params(int argc, char **argv)
{
    int i = 0;
    int j = 0;

    while (i != argc) {
        if ((argv[i] > 64 && argv[i] < 91) || (argv[i] > 97 && argv[i] < 123)) {
            j = j + my_strlen(argv[i]);
        }
                    i++;
        printf("%d", j);
    }
}

int main(int argc, char **argv)
{
    //my_putstr(concat_params(argc, argv));
    concat_params(argc, argv);
    return (0);
}
