/*
** EPITECH PROJECT, 2024
** Workshop_Unit_Tests
** File description:
** programm_main
*/

#include "my.h"
#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////
/// \file programm_main.c
/// \brief Contains the programm_main function.
/// \author PAGY0Z
/// \version 1.0
/// \date 2023-27-05
///////////////////////////////////////////////////////////////////////////////

int programm_main(int argc, char **argv);

///////////////////////////////////////////////////////////////////////////////
/// \brief The main function of the program.
/// \param argc The number of arguments.
/// \param argv The arguments.
/// \return 0 if the program ran successfully, 84 otherwise.
///////////////////////////////////////////////////////////////////////////////
int programm_main(int argc, char **argv)
{
    char **array = NULL;
    if (argc < 2) return 84;
    array = my_str_to_word_array(argv[1], " ");
    if (!array) return 84;
    for (int i = 0; array[i]; i++)
        printf("%s\n", array[i]);
    freen_array(array, my_array_len(array));
    return 0;
}
