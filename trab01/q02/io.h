#ifndef IO_H
#define IO_H

int validate_argc(int argc);
void print_error(const char *menssage);
void print_man();
int check_argc_argv(int argc, int flag);
int validate_argv(int argc, char *argv[]);
void print_list(const int len, const int *list);

extern const char *MISSING_ARG;
extern const char *MISSING_INT;

// types of args
extern const int EMPTY;
extern const int CRESCENT;
extern const int DECREASING;
extern const int HELP;
extern const int ERROR;

#endif
