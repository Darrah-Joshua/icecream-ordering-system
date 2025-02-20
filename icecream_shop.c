//Joshua Darrah, BSc. Computer Engineering

#include <stdio.h>

int main(){
    int order = 0, time = 0;
    float cost;
    printf("WELCOME TO FIIFI'S ICE CREAM SHOP\nWhat would you like to order?\n");

    do{
        int flavour = 0, topping = 0, size = 0;
        printf("1 - Vanilla\n2 - Strawberry\n3 - Chocolate\n4 - Mango\n5 - Enquiries\n>>> ");
        //receiving user input for flavour
        scanf("%d", &flavour);

        printf("1 - small\n2 - large\n>>> ");
        //receiving user input for size
        scanf("%d", &size);

        if ((flavour >=1 && flavour <= 4) && (size == 1 || size == 2)){
            if(flavour == 1){
                printf("You ordered Vanilla as %s \n", (size == 1) ? "Small" : "Large");
                cost += (size == 1) ? 5 : 8;
                //Calculating the total time spent in ordering
                time += (size == 1)? 2 : 3;
            }

            else if(flavour == 2){
                printf("You ordered Strawberry as %s \n", (size == 1)? "Small" : "Large");
                cost += (size == 1) ? 5 : 8;
                //Calculating the total time spent in ordering
                time += (size == 1)? 2 : 3;
            }

            else if(flavour == 3){
                printf("You ordered Chocolate as %s \n", (size == 1)? "Small" : "Large");
                cost += (size == 1) ? 6 : 9;
                //Calculating the total time spent in ordering
                time += (size == 1)? 2 : 3;
            }

            else if(flavour == 4){
                printf("You ordered Mango as %s \n", (size == 1)? "Small" : "Large");
                cost += (size == 1) ? 7 : 10;
                //Calculating the total time spent in ordering
                time += (size == 1)? 2 : 3;
            }


            else{
                printf("Invalid size entry\n");
            }


        }

        //Checking if customer needs a service agent
        if(flavour == 5){
            printf("A customer service agent will be with you soon\n");
        }

        else if(flavour > 5){
            printf("Invalid flavour entry\n");
        }

    }while(order > 0);

    //Declaring toppings
    int toppings = 0;
    do{
        //Displaying the toppings menu to the user for selection and receiving their input
        printf("1 - Sprinkles\n2 - Whipped cream\n3 - Chopped Nuts\n4 - Coconut Shavings\n>>> ");
        scanf("%d", &toppings);

        //If the user’s selected topping is 1, 2, 3 or 4 do the following
        if(toppings >= 1 && toppings <= 4){
            if (toppings == 1){
                printf("Sprinkles, Great choice!\n");
                //Adding the cost of the selected topping to the existing cost of the entire order
                cost += 2;
                //Adding the waiting time of the selected meal to the existing time of the entire order
                time += 2;
                //Increasing the value of toppings by 1
                toppings += 1;
            }

            else if (toppings == 2){
                printf("Whipped cream, Great choice!\n");
                //Adding the cost of the selected topping to the existing cost of the entire order
                cost += 3;
                //Adding the waiting time of the selected meal to the existing time of the entire order
                time += 3;
                //Increasing the value of toppings by 1
                toppings += 1;
            }

            else if (toppings == 3){
                printf("Chopped Nuts, Great choice!\n");
                //Adding the cost of the selected topping to the existing cost of the entire order
                cost += 4;
                //Adding the waiting time of the selected meal to the existing time of the entire order
                time += 4;
                //Increasing the value of toppings by 1
                toppings += 1;
            }

            else if (toppings == 4){
                printf("Coconut Shavings, Great choice!\n");
                //Adding the cost of the selected topping to the existing cost of the entire order
                cost += 5;
                //Adding the waiting time of the selected meal to the existing time of the entire order
                time += 5;
                //Increasing the value of toppings by 1
                toppings += 1;
            }

            else if (toppings == 5){
                //setting the value of toppings to zero
                toppings = 0;
            }

            else {
                printf("Invalid topping entry\n");
            }
        }

        //Checking if user wants to make an additional order
        printf("Would you like anything else?\n1 - Yes\n2 - No\n>>> ");
        int user_input = 0;
        scanf("%d", &user_input);
        if(user_input == 1){
            order += 1;
            //Displaying the total cost and waiting time of the order
            printf("Your Total Cost is GHS %f\n", cost);
            printf("Your waiting time is %d\n", time);
        }

        else if(user_input == 2){
            order = 0;
            toppings = 0;
            //Displaying the total cost and waiting time of the order
            printf("Your Total Cost is GHS %f\n", cost);
            printf("Your waiting time is %d minutes\n", time);
        }

    }while(toppings > 0);

    printf("Kindly wait for your order\n");
    //counting down in a loop, the waiting time of the total order
    while(time > 0){
        for(int i = time; i >= 0; i--)
            printf("%d\n", i);
        break;

    }

    printf("\nHere is your order\nThanks for coming to Fiifi's Ice Cream");

    return 0;
}

