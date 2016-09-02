#include "core.h"

Sortlist *get_list(const int flag, const int argc, char *argv[])
{
    Sortlist *sort_list;
    int position_flag = 0;

    if(flag){
        position_flag = search_flag(flag, argc, argv);

        if(position_flag){
            argv = remove_string_position(position_flag, argc, argv);
        }
        else
            return NULL;
    }
    remove_string_position(0, argc, argv);
    int *sort_list_int;
    int argv_len = argc - count_null(argc, argv);
    sort_list = parser_value(argv_len, argc, argv);
    sort_list = create_list(argv_len, flag, sort_list);

    return sort_list;
}

Sortlist *create_list(const int len,const int flag,const int *sort_list)
{

    Sortlist *list = malloc(sizeof(Sortlist));
    list->int_list = malloc(len * sizeof(int));
    for (int i = 0; i < len; i++) {
        list->int_list[i] = sort_list[i];
    }
      list->order = flag;
      list->list_len = len;

    return list;
}

int *parser_value(const int argv_len, const int argc, char *argv[])
{
    int *list = malloc(argv_len* sizeof(int));
    int array_position = 0;

    for (int i = 0; i < argc; i++) {
        if(argv[i] != NULL){
            list[array_position] = atoi(argv[i]);
            array_position++;
        }
    }

    return list;
}

int count_null(const int len, char *argv[])
{
    int nulls = 0;

    for (int i = 0; i < len; i++) {
        if(argv[i] == NULL)
            nulls++;
    }

    return nulls;
}

char **remove_string_position(const int position, const int argc,char *argv[])
{
    for (int i = 0; i < argc; i++) {
        if(i == position)
            argv[i] = NULL;
    }

    return argv;
}

int search_flag(const int flag, const int argc, char *argv[])
{
    int position = 0;

    for (int i = 0; i < argc; i++) {
        if(flag == CRESCENT){
            if (strcmp(argv[i], "-crescent") == 0)
                position = i;
        }
        else if(flag ==  DECREASING){
            if (strcmp(argv[i], "-decreasing") == 0)
                position = i;
        }
    }

    return position;
}
