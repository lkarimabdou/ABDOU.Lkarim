/*
** EPITECH PROJECT, 2024
** Workshop_Unit_Tests
** File description:
** my
*/

#ifndef MY_H_
#define MY_H_

#include <stdbool.h>
#include <stdlib.h>
#include <criterion/criterion.h>
#include <criterion/redirect.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))

bool str_is_token(char const *str, char const *tokens);
char *my_strndup(char const *str, int n);
int my_strlen(char const *str);
int my_strlen_sepa(char const *str, char const *sepa);
char **my_str_to_word_array(char const *str, char *sepa);
void my_free(void *ptr);
int my_count_words(char const *str, char const *sepa);
int my_array_len(char **array);
void freen_array(char **array, int n);
bool is_token(char c, char const *tokens);
int programm_main(int argc, char **argv);

#endif /* !MY_H_ */
