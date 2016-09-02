#ifndef CORE_H
#define CORE_H

#include <stdlib.h>
#include <string.h>
#include "sort_list.h"
#include "io.h"

Sortlist *get_list(const int TYPE, const int argc, char *argv[]);

int find_flag(const int FLAG, const int argc, char *argv[]);

int *parser_value(const int argv_len, const int argc, char *argv[]);


int count_null(const int len, char *argv[]);


Sortlist *create_list(
        const int len,
        const int flag,
        const int *sort_list_int
        );

char **remove_string_position(
        const int position_flag,
        const int argc,
        char *argv[]
        );

#endif
