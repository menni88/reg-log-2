#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "data.h"

void loginUser(User *users, int total) {
    char username[20];
    char password[20];

    printf("Enter your username: ");
    scanf("%s", username);

    printf("Enter your password: ");
    scanf("%s", password);

    int i;
    int found =0;
    for (i = 0; i < total; i++) {
        if (strcmp(users[i].username, username) == 0 && strcmp(users[i].password, password) == 0) {
        	  found =1;
        	  
        	if(users[i].status.intActive == 1 || users[i].status.boolActive == true ){
        		  printf("Hello %s\n", users[i].username);
                  return;
			}else{
				printf("sorry %s\n we can not log you in since your are not active.\n", users[i].username);
				return;
			}
        }
    
    }

   
        if(i==total && found==0){
        	printf("Invalid username or password.\n");
		} 
}
