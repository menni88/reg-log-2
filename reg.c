#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "data.h"


void registerUser(User *users, int *total) {
	
    User newUser;
    printf("Enter your username: ");
    scanf("%s", newUser.username);
    int i;
    for ( i = 0; i < *total; i++) {
        if (strcmp(users[i].username, newUser.username) == 0) {
            printf("Username already exists.\n");
            return;
        }
    }

    printf("Enter password: ");
    scanf("%s", newUser.password);
    
    char state[10];
    printf("Is %s active?\nEnter true or 1 for active and false or 0 for not active: ", newUser.username);
    scanf("%s",state);

    bool notVerified = true;

    while (notVerified) {
        if (strcmp(state, "true") == 0 || strcmp(state, "false") == 0) {
            newUser.status.boolActive = (strcmp(state, "true") == 0);
            notVerified = false;
        } else if (strcmp(state, "1") == 0 || strcmp(state, "0") == 0) {
            newUser.status.intActive = atoi(state);
            notVerified = false;
        } else {
            printf("Invalid input.\nPlease enter a valid input.\nIs %s active?\nEnter true or 1 for active and false or 0 for not active: ", newUser.username);
             scanf("%s",state);
        }
    }
     


    users[(*total)++] = newUser;

    printf("Hello %s\n", newUser.username);
}
