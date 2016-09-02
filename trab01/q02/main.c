#define _GNU_SOURCE
#include <stdlib.h>
#include "sort_list.h"
#include "core.h"
#include "io.h"
#include "sort.h"

int main(int argc, char *argv[]){

    int argc_is_valid = validate_argc(argc);
    int argv_is_valid = validate_argv(argc, argv);
    int arg_is_valid = (
            argc_is_valid &&
            argv_is_valid != ERROR &&
            argv_is_valid != HELP
            );

    if(arg_is_valid){
        Sortlist *sort_list = get_list(argv_is_valid, argc, argv);
        if(sort_list != NULL){
            sort_list = sort(sort_list);
            print_list(sort_list->list_len, sort_list->int_list);
        }
        else {
            print_error(MISSING_ARG);
        }
    }
    else{
        if(!argc_is_valid)
            print_error(MISSING_ARG);
        else if(argv_is_valid == ERROR)
            print_error(MISSING_INT);
        else if(argv_is_valid == HELP)
            print_man();
    }
    return 0;
}
