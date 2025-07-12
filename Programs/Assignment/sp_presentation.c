#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include<time.h>

// Structure to store flight passenger data.
typedef struct Passenger {
    char id[20];
    char name[50];
    char flights[3][50];
    int flight_count;
    float price[3];
    float wallet;
} Psg;

Psg Psg_db[] = {
    {"Aakash172005", "Aakash Goswami", {"Indigo_Mumbai -> Goa", "AirIndia_Delhi -> Mumbai", "Emirates_Mumbai -> Dubai"}, 3, {5699.23,6999.23,9998.90}, 28956.98},
    {"Anshu124578", "Anshuman Dash", {"AirIndia_Mumbai -> Delhi", "AirIndia_Goa -> Mumbai", "SpiceJet_Mumbai->Jaipur"}, 3, {7999.23,5000.85,9562.28}, 24356.78},
    {"Kaustub123", "Kaustubh Bhavsar", {"SpiceJet_Pune -> Delhi", "Airvia_Chennai -> Mumbai", "IndiGo_Delhi -> Goa"}, 3, {6699.23,4999.23,7998.99}, 36875.89},
    {"Kiran4520", "Kiran Chinthakindi", {"Indigo_Mumbai -> Delhi", "AirIndia_Goa -> Mumbai"}, 2, {5699.23,5314.45}, 15487.00}
};


// Function to check if a user exists in the database
int check_user(char user_id[20], Psg *user_record);

// Function to handle rebooking a flight
void rebook_flight(Psg user_record);

// Function to register a new user
void register_new_user(char user_id[20]);

// Function for authentacting coupon
float coupon_Auth (float price);

// Function for making paymet
int paymet();
int pay;

//Function to select random time
void random_time();

int main() {
    printf("-----------------------------------SP PRESENTATION PROGRAM---------------------------------------\n");
    printf(" Group - Horizon\n");
    printf("******************\n");
    printf("Group Members: \n");
    printf("1. Aakash Gowsami     - 24CC1001\n");
    printf("2. Anshuman Dash      - 24CC1005\n");
    printf("3. Kaustubh Bhavsar   - 24CC1010\n");
    printf("4. Kiran Chinthakindi - 24CC1023\n");
    printf("-------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t\t Welcome to Horizon Airlines.\n");
    printf("\t\t\t       -------------------------------\n");
    printf("\t\t\t The magical place to visit your dream places\n\nCould you please provide your details:\n");
    char user_id[20];
    printf("Enter your user ID: ");
    //scanf("%s", user_id);
    fgets(user_id,20,stdin);

    Psg user_record;
    if (check_user(user_id, &user_record)) {
        rebook_flight(user_record);
    } else {
        printf("----\n");
        printf("No match found in previous records for this user id. \nPlease register as a new user.\n");
        register_new_user(user_id);
    }

    return 0;
}

// Function to check if a user exists in the database
int check_user(char user_id[20], Psg *user_record) {
    for (int i = 0; i < 4; i++) {
        if (strcmp(Psg_db[i].id, user_id) == 0) {
            *user_record = Psg_db[i];
            return 1;
        }
    }
    return 0;
}

// Function to handle rebooking a flight
void rebook_flight(Psg user_record) {
    char exit,coupon[10],booking[50];
    char y_n[3];
    float price=12365.23;
    printf("-------------------------------------\n");
    printf("User Found as : %s \nPast Records : \n", user_record.name);
    printf("-------------------------------------------------------\n");
    for (int i = 0; i < user_record.flight_count; i++) {
        printf("|  %d. %s \t Price : Rs.%0.2f   |\n", i+1, user_record.flights[i],user_record.price[i]);
    }
    printf("-------------------------------------------------------\n");
A:
    printf("\nWould you like to rebook a flight? (yes/no): ");
    scanf("%s", y_n);
    if (strcmp(strlwr(y_n), "yes") == 0) {
        int rebook_flight;
        printf("Which flight would you like to rebook? (Enter integer only like 1,2,3...) : ");
        scanf("%d",&rebook_flight);
        float P=user_record.price[rebook_flight-1];  //Storing price of rebook_flight.
        if(rebook_flight <= 3 ){
        random_time();
        P=coupon_Auth(P);
        printf("Would you like to use wallet balance for payment? Available balance: [Rs.%0.2f] (yes/no): ",user_record.wallet);
        scanf("%s",y_n);
        strcpy(y_n,strlwr(y_n));
            if(strcmp(y_n,"yes")==0){
                printf("\nSuccessfully rebooked %d.%s flight\n", rebook_flight,user_record.flights[rebook_flight-1]);
                printf("Payment is done from your wallet. Remaining balance is: Rs.%0.2f \nHave a safe journey. Thank You! Visit Again.\n",(user_record.wallet)-P);
                printf("______________________________________________________________________________________________\n");
                scanf(" %c",exit);
            }
            else if(strcmp(y_n,"no")==0){
                B:
                   if(payment()==1){
                    printf("\nSuccessfully rebooked %d.%s flight\nHave a safe journey. Thank You! Visit Again.\n", rebook_flight,user_record.flights[rebook_flight-1]);
                    printf("______________________________________________________________________________________________\n");
                    scanf(" %c",&exit);
                    }
                    else if(payment()==0){
                    printf("\nPayment Cancelled :( \n");
                    printf("----------------------------------------------\n");
                    goto A;
                    }
                    else{printf("\nLet's try again.\n----\n");
                    goto B;
                    }
            }
            else{
                printf("\nOops it seems you missed something\n");
                goto A;
            }
    }
    
//If wrong filght number entered
        else{
            printf("\nOops it seems you missed something\n");
            printf("-------------------------------------------------------------------------------------------------\n");
            scanf(" %c",&exit);
            return;
        }
}
//If old user want to book a new flight
     else if(strcmp(y_n, "no") == 0){
        printf("----\n");
        printf("Do you want to book a new Journey ? (yes/no): ");
        scanf("%s",y_n);
            if(strcmp(strlwr(y_n),"yes") == 0){
                C:
                printf("Where would you like to go?\nEnter Destination: ");
                scanf("%s",booking);
                printf("That's a great destination !\nWe have a flight for there which will cost : Rs.%0.2f\n",price);
                random_time();
                coupon_Auth(price);
                if(payment()==1){
                        printf("\nCongratulations booking confirmed for flight to %s \nHave a safe journey. Thank You! Visit Again.\n",booking);
                        printf("______________________________________________________________________________________________\n");
                        scanf(" %c",&exit);
                    }
                    else if(payment() == 0){
                        printf("\nPayment Cancelled :( \n");
                        printf("----------------------------------------------\n");
                        goto C;
                    }
                    else{printf("\nOops it seems you missed something\n");
                    goto B;
                    }
            }
            else if(strcmp(strlwr(y_n),"no")==0){
                printf("Thank you for Visiting.\n");
                printf("______________________________________________________________________________________________\n");
                scanf(" %c",&exit);
            }
    }
    else {
        printf("Invalid Input \n");
        printf("-------------------------------------------------------------------------------------------------\n");
        scanf(" %c",&exit);
    }
}




// Function to register a new user
void register_new_user(char user_id[20]) {
    char exit, y_n[3], coupon[10],booking[20];
    float price=11458.32;
    Psg new_user;
    strcpy(new_user.id,user_id);
    printf("For your new user id '%s'\n",new_user.id);
    printf("Enter your name: ");
    scanf("%s", new_user.name);
    printf("Congratulations you have been registered as our family !! :) \n");
    printf("-----------------------------------------------------------------\n");
A:
    printf("Where would you like to go?\nEnter Destination: ");
    scanf("%s", booking);
    printf("Great Destination! We have a flight for you.\nYour flight price is : Rs.%0.2f\n",price);
    random_time();
    coupon_Auth(price);
    if(payment()==1){
        printf("\nCongratulations your booking is successful for flight to %s.\nGet ready to FLY HIGH....\n", booking);
        printf("----------------------------------------------------------------------------\n");
        printf("|   Once again congratulations, You won a free burger at 'BURGER HUT' :)   |\n|   Use coupon : 24CC1001 \t\t\t\t\t\t   |\n");
        printf("----------------------------------------------------------------------------\n");
        printf("Thank You! Visit Again.\n");
        printf("________________________________________________________________________________________________\n");
        scanf(" %c",&exit);
    }
    else if(payment()==0){
        printf("\nPayment Cancelled :( \n");
        printf("-----------------------------------------------------\n");
        goto A;
    }
    else{printf("\nOops it seems you missed something\n");
    scanf(" %c",&exit);
    }
}


//Function to check coupon.
float coupon_Auth (float price){
    char coupon[20],y_n[3];
printf("Do you have any discount coupon? (yes/no): ");
scanf("%s",y_n);
if(strcmp(strlwr(y_n),"yes")==0){   
        printf("Enter your coupon : ");
        scanf("%s",coupon);
        if (strcmp(coupon,"24CC1033")==0){
            float pr = price*0.9;
            printf("-----------------------------------------------------\n");
            printf("Congratulations that's a valid coupon, 10 percentage discount is applied to your ticket\n");
            printf("Your final ticket price is : Rs.%0.2f\n",pr);
            return pr;
        }
        else{
        printf("Oops it seems you got scammed by coupon provider, your coupon is not a valid one!\n");
        printf("------------------------------------------------------------------------------------------\n");
        printf("Your final price is : Rs.%0.2f\n",price);
        return price;
    }
}
else if(strcmp(strlwr(y_n),"no")==0){ 
    return price;
}
else {
    printf("Oops you messed up !\n");
    return price;
}
}

// Function to make payment
int payment(){
    char upi[20],debit[3][30],y_n[3];
    printf("----\n");
    printf("How would to like to do payment?\n");
    printf("1. UPI\n2. Debit Card\n3. Scanner\n");
    scanf("%d",&pay);
    switch(pay){
        case 1:
        printf("Please provide your UPI ID: ");
        scanf("%s",upi);
        printf("Are you sure you want to finalize your payment? (yes/no): ");
        scanf("%s",y_n);
        if(strcmp(strlwr(y_n),"yes")==0){
            return 1;
        }
        else{
            return 0;
        }
        break;
        case 2:
        printf("Enter your debit card details : \n");
        printf("Enter name: ");
        scanf("%s",debit[1]);
        printf("Enter card number: ");
        scanf("%s",debit[2]);
        printf("Enter cvv: ");
        scanf("%s",debit[3]);
        printf("Are you sure you want to finalize your payment? (yes/no): ");
        scanf("%s",y_n);
        if(strcmp(strlwr(y_n),"yes")==0){
            return 1;
        }
        else{
            return 0;
        }
        break;
        case 3:
        printf("Please scan the below qr to pay\n");
        printf("\t\t---------------\n");
        for(int i=0; i<5; i++){
            printf("\t\t| *********** |\n");
        }
        printf("\t\t---------------\n");
        printf("If done type (yes/no) : ");
        scanf("%s",y_n);
        if(strcmp(strlwr(y_n),"yes")==0){
            return 1;
        }
        else{
            return 0;
        }   
        break;
        default:
        printf("Oops, you put wrong input !");   
        return 2; 
    }
}

// Function to generate a random time
void random_time() {
    // Seed the random number generator
    srand(time(NULL));


    // Generate a random hour, minute, and second
    int hour = rand() % 24;
    int minute = rand() % 60;
    int second = rand() % 60;

    printf("Timing of your flight is: %02d:%02d:%02d\n\n", hour, minute, second);
    printf("---\n");
}



