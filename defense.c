/*
    PROGRAM DEFENCE
    Group 13
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <conio.h>

int main()
{
    float total = 0.0;
    float user = 0.0;
    float amount = 0.0;
    char choice;
    bool user_insert = true, user_choice = true;
    bool valid_cream = true, valid_sugar = true, valid_extra = true;
   
    //Accept coins
    while (user_insert)
    {
        printf("Insert coin (5, 10 or 25): ");
        scanf("%f", &user);

        if (user == 0)
        {
            user_insert = false;
        }

        else if (user == 5)
        {
            total += 0.05;
        }

        else if (user == 10)
        {
            total += 0.10;
        }

        else if (user == 25)
        {
            total += 0.25;
        }

        else
        {
            printf("Invalid\n");
        }
    }

        printf("You inserted: %.2f\n", total);
        printf("\n");
        fflush(stdin);
        getchar();
        
        
        //Give drink choice
        printf("Choose drink:\n");
        printf("        1. Coffee\n");
        printf("        2. Tea\n");
   while(user_choice){
        printf("Enter Choice: ");
        scanf("%f", &user);

        if (user == 1)
        {
            amount = amount + 0.25;
            user_choice = false;
        }
        else if (user == 2)
        {
            amount = amount + 0.25;
            user_choice = false;
        }
        else
        {
            printf("Invalid\n");
        }
   }
        printf("Amount: %.2f\n", amount);
        fflush(stdin);
        getchar();
   //     while(getchar() != '\n');
        
    //Ask extra
    while(valid_cream) {
       printf("Add cream (y/n)? ");
       scanf("%c", &choice);
       
       if (choice == 'y')
        {
            amount += 0.05;
            valid_cream = false;
        }
        else if (choice == 'n')
        {
            valid_cream = false;
        }
        else
        {
            printf("Invalid\n");
            while(getchar() != '\n');
        }
    }
    
    while(valid_sugar) {
       printf("Add sugar (y/n)? ");
       scanf("%c", &choice);
       
       if (choice == 'y')
        {
            amount += 0.05;
            valid_sugar = false;
        }
        else if (choice == 'n')
        {
            valid_sugar = false;
        }
        else
        {
            printf("Invalid\n");
        }
    }
    
    while(valid_extra) {
       printf("Add extra sugar (y/n)? ");
       scanf("%c", &choice);
       
       if (choice == 'y')
        {
            amount += 0.05;
            valid_extra = false;
        }
        else if (choice == 'n')
        {
            valid_extra = false;
        }
        else
        {
            printf("Invalid\n");
        }
    }
        printf("Amount: %.2f\n", amount);
        fflush(stdin);
        getchar();

    //Compute values
    float balance = total - amount;

    // Display balance and check if sufficient
    if (balance < 0) {
        printf("\nNot enough money! = %.2f\n", -balance);
        printf("Please insert more coins...\n");
        fflush(stdin);
        getchar();

        // Go back to inserting coins
        user_insert = true;                 
        while (user_insert) {
            printf("Insert coin (5, 10 or 25): ");
            scanf("%f", &user);

            if (user == 0) {
                user_insert = false;
            }
            else if (user == 5)  
            { 
                total += 0.05; 
            }
            else if (user == 10) 
            { 
                total += 0.10; 
            }
            else if (user == 25) 
            { 
                total += 0.25; 
            }
            else {
                printf("Invalid coin\n");
            }
        }

        // After adding more coins, recalculate balance
        balance = total - amount;
        printf("\nNew total inserted: %.2f\n", total);
        printf("Final balance (change): %.2f\n", balance);
    }
    
    else {
        printf("\nPayment successful!\n");
        printf("Your change: %.2f\n", balance);
    }

    //test
    printf("\nThank you!\n");
    fflush(stdin);
    getchar();

    return 0;
}

/*

    1. Accept coins from user.
    2. Give a choice for coffe or Tea.
    3. Then ask cream, sugar or extra sugar.
    4. Compute the values.
    5. Display balance and change if it is exact or suffient, else add more coin.

*/