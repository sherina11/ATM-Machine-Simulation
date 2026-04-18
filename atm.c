#include<stdio.h>

int main(){

    int choice;
    float balance = 1000, deposit, withdraw;

    while(1){

        printf("\n--- ATM Machine ---\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");

        printf("Enter choice: ");
        scanf("%d",&choice);

        switch(choice){

            case 1:
                printf("Balance: %.2f\n",balance);
                break;

            case 2:
                printf("Enter deposit amount: ");
                scanf("%f",&deposit);
                balance += deposit;
                printf("Deposit Successful\n");
                break;

            case 3:
                printf("Enter withdraw amount: ");
                scanf("%f",&withdraw);

                if(withdraw > balance)
                    printf("Insufficient Balance\n");
                else{
                    balance -= withdraw;
                    printf("Withdrawal Successful\n");
                }
                break;

            case 4:
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }
}