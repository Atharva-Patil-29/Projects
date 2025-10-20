// MINI ATM
#include <stdio.h>

struct Account
{
    int account_number;
    char name[50];
    float balance;
};

void CreateAccount(struct Account *acc);
void Deposit(struct Account *acc);
void Withdraw(struct Account *acc);
void BalanceCheck(struct Account *acc);

void CreateAccount(struct Account *acc)
{
    printf("Enter Account Number: \n");
    scanf("%d", &acc->account_number);
    printf("Enter Your Name: \n");
    scanf(" %[^\n]", acc->name);
    acc->balance = 0;
    printf("Account Created Successfully!!\n");
}

void Deposit(struct Account *acc)
{
    float amount;
    printf("--Enter Amount to Deposit--\n");
    scanf("%f", &amount);
    if (amount > 0)
    {
        acc->balance += amount;
        printf("Amount Deposti Successfullyy!!\n");
    }
    else
    {
        printf("--Invalid Amount--\n");
    }
}
void withdraw(struct Account *acc)
{
    float amount;
    printf("Enter Amount to Withdraw:\n");
    scanf("%f", &amount);
    if (amount > 0 && amount <= acc->balance)
    {
        acc->balance -= amount;
        printf("Amount Withdraw Successfully\n");
    }
    else
    {
        printf("--Insufficient Balance OR Invalid Amount--\n");
    }
}
void BalanceCheck(struct Account *acc)
{
    printf("Enter Account Number:%d\n", acc->account_number);
    printf("Enter name:%s\n", acc->name);
    printf("current Balance:%f\n", acc->balance);
}
int main(void)
{
    struct Account acc;
    int choise;
    do
    {
        printf("------MINI ATM-----\n");
        printf("1. Create Account\n");
        printf("2. Deposit Amount\n");
        printf("3. Withdra Amount\n");
        printf("4. Check Balance\n");
        printf("5. Check Details");
        printf("6. Exit\n");
        printf("Enter Your Choise\n");
        scanf("%d",&choise);
        switch (choise)
        {
        case 1:
            CreateAccount(&acc);
            break;
        case 2:
            Deposit(&acc);
            break;
        case 3:
            withdraw(&acc);
            break;
        case 4:
            BalanceCheck(&acc);
            break;
        case 5:
            printf("---Thank You For Using Our MINI ATM---\n");
            break;
            

        default:
            printf("--Invalid Choise , Try Again !!\n");
            break;
        }
    } while (choise != 5);

    return 0;
}