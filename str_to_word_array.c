#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i += 1;
    }
    return (i);
}

void my_putstr(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i += 1;
    }
}

int count_char(char *str, int i)
{
    char *word;
    int nb_char = 0;

    while (str[i] != ' ' && str[i] != '\0') {
        nb_char += 1;
        i += 1;
    }
    return (nb_char);
}

void str_to_word_array(void) {
    char *str = "Je vais a la gare ce matin";
    int len = my_strlen(str);
    char **copy = malloc(sizeof(char) * (len + 1));
    int i = 0;
    int count = 0;
    int a = 0;

    while (str[i] != '\0') {
        printf("%d\n", i);
        count = count_char(str, i);
        copy[a] = malloc(sizeof(char) * (count));
        printf("%d\n\n", count);
        while (str[i] != ' ' && str[i] != '\0') {
            copy[a][i] = str[i];
            printf("copy [a] = %s", copy[a]);
            i += 1;
        }
        i += 1;
        a += 1;
    }
    my_putstr(copy[0]);
}
