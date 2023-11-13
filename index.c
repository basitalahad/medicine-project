#include <stdio.h>
#include <string.h>

int main(void) {
    // art representation of a capsule 
    printf("   ---------\n");
    printf("  --       --\n");
    printf(" ---       ---\n");
    printf("----Capsule----\n");
    printf(" ---       ---\n");
    printf("  --       --\n");
    printf("   ---------\n\n"); 


    char email[][100] = {"basitalahad@gmail.com", "ahadbasit@gmail.com"};
    char input_email[100];
    char password[][20] = {"12344321", "789987"};
    char input_password[20];
    int flag = 1, index;
    
    // check email
    while (flag != 0)
    {
        printf("Enter your Email: ");
        scanf("%s", input_email);

        for(int i = 0; i < 2; i++){
            if(strcmp(email[i], input_email) == 0){
                printf("Your Email is valid.\n");
                flag = 0;
                index = i;
                break;
            }
        }
        if(flag != 0) printf("Your Email is not valid.\n");

    }

    // check password
    flag = 1;
    while (flag != 0)
    {
        printf("Enter your password: ");
        scanf("%s", input_password);

        if(strcmp(password[index], input_password) == 0){
            printf("Your Password is correct.\n\n");
            flag = 0;
        }
        else printf("Your Password is not correct.\n");
    }

    //check the condition of the patient
    int option, second_option;
    printf("What kind of illness are you experiencing? \n");
    printf("1 - Fever\n2 - Cold\n3 - Loose motion\n4 - Gastric\n");

    flag =  1;
    while (flag != 0)
    {
        printf("Enter your Option: ");
        scanf("%d",&option);
        switch (option){
            case 1:
                second_option = 0;
                flag = 1;
                printf("Fever High or Low\n");
                printf("1 - High\n2 - Low\n");
                while (flag != 0)
                {
                    printf("Enter your option: ");
                    scanf("%d", &second_option);
                    if(second_option == 1){
                        printf("Medicine: Napa Plus\n\n");
                        flag = 0;
                    }
                    else if(second_option == 2){
                        printf("Medicine: Napa\n\n");
                        flag = 0;
                    }

                    if(flag != 0){
                        printf("Your option is not Valid.\n");
                    }
                }
                flag = 0;
                break;
            case 2:
                second_option = 0;
                flag = 1;
                printf("Type of Cold\n");
                printf("1 - Sore Throat\n2 - Sneeze\n");
                while (flag != 0)
                {
                    printf("Enter your option: ");
                    scanf("%d", &second_option);
                    if(second_option == 1){
                        printf("Medicine: Tusca\n\n");
                        flag = 0;
                    }
                    else if(second_option == 2){
                        printf("Medicine: Afrin drop\n\n");
                        flag = 0;
                    }

                    if(flag != 0){
                        printf("Your option is not valid.\n");
                    }
                }
                flag = 0;
                break;
            case 3:
                printf("Medicine: Flagyl\n\n");
                flag = 0;
                break;
            case 4:
                printf("Medicine: Seclo\n\n");
                flag = 0;
                break;
            default:
                printf("Your Option is not valid.\n");
                break;    
        }
    }
    return 0;
}