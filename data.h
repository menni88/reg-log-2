#ifndef DATA_H
#define DATA_H
#include <stdbool.h>

#define size 50

typedef union {
    int intActive;
    bool boolActive;
} accState;

typedef struct {
    char username[20];
    char password[20];
    accState status;
} User;

void registerUser(User *users, int *total);
void loginUser(User *users, int total);

#endif 
