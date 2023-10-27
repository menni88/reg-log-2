#include <stdio.h>
#include <stdlib.h>
#include "data.h"


int main() {
    User users[size];
    int total = 0;
    int mode;

    while (1) {
        printf("1. Register\n");
        printf("2. Login\n");
        printf("Enter your choice: ");
        scanf("%d", &mode);

        switch (mode) {
            case 1:
                if(total < size)
                { 
                    registerUser(users, &total); 
                }else
                {
                  printf("users are full\n");  
                }
                break;
            case 2:
                loginUser(users, total);
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
