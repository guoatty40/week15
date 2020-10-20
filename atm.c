#include<stdio.h>
int atm(){
    int pin;
    while(pin != 1520){
        printf("Enter your secret pin number: ");
        scanf("%d",%pin);
        if(pin != 1520){
            printf("Please enter valid password\n");
        }
    }
    do{
      printf("******Welcome to ATM Service******")
      printf("1. Check Balance\n");
      printf("2. Withdraw Cash\n");
      printf("3. Deposit Cash\n");
      printf("4. Quit\n");
      printf("************?\n\n");
      printf("Enter your choice: ");
    }while(!k);
    return();
}
