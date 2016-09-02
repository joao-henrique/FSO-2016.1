#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "io.h"

const char *MISSING_ARG = "Missing argument";
const char *MISSING_INT = "Inform integers to sort";
const int CRESCENT = 1;
const int DECREASING = 2;
const int HELP = 3;
const int ERROR = 4;
const int EMPTY = 0;

int validate_argc(int argc){
    int is_valid = 0;

    if (argc >= 2)
        is_valid = 1;

    return is_valid;
}

void print_man(){
    printf("Opções\n");
    printf("-crescent, 			 'Listar em ordem crescente'\n");
    printf("-decreasing, 		 'Listar em ordem decrescente'\n");
    printf("-help 		       'Mostrar Exemplo'");
    printf("crescent order\n");
    printf("All option \n");
    printf("\t-d, \t\t\tsort in crescent order\n");
    printf("\t-r, \t\t\tsort in decreasing order\n");
    printf("\t-h, --help \t\tshow this help\n");
    printf("\n");
    printf("Example:\n");
    printf("\t\t./run -d 4 5 34 3 9 1 10\n");
    printf("\tor:\t./run -r 4 5 34 3 9 1 10\n");
    printf("\tor:\t./run 4 5 34 3 9 1 10\n");
    printf("\n");
}

void print_error(const char *message){
    printf("ERROR: ");
    printf("%s\n\n", message);
    print_man();
}

void print_list(const int len, const int *list){
    int i = 0;
    printf("%d", list[i]);

    for (i = 1; i < len; i++) {
        printf(" %d", list[i]);
    }

    printf("\n");
}


int check_argc_argv(int argc, int flag){
    if(flag == HELP)
          return HELP;
    else{
        if(argc <= 2)
            return ERROR;
    }
  return flag;
}

int validate_argv(int argc, char *argv[]){
    int validate_response = 0;

    for (int i = 1; i < argc; i++) {
        if(strcmp(argv[i], "-h") == 0)
            validate_response = check_argc_argv(argc, HELP);
        else if(strcmp(argv[i], "-help") == 0)
            validate_response = check_argc_argv(argc, HELP);
        else if(strcmp(argv[i], "-crescent") == 0)
            validate_response = check_argc_argv(argc, CRESCENT);
        else if(strcmp(argv[i], "-decreasing") == 0)
            validate_response = check_argc_argv(argc, DECREASING);

        if (validate_response)
            return validate_response;
    }

    return validate_response;
}
