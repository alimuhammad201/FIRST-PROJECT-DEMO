
#include <stdio.h>

int validateWithdrawal(float balance, float amount)
{
    if ((int)amount % 500 != 0 || amount != (int)amount)
    {
        return 0;
    }
    else if (amount > balance)
    {
        return -1;
    }
    else if (balance - amount < 1000)
    {
        return -2;
    }

    return 1;
}

float withdraw(float balance, float amount)
{
    return balance - amount;
}

void showMessage(int code)
{
    if (code == 1)
    {
        printf("Withdrawal successful.\n");
    }
    else if (code == 0)
    {
        printf("Error: Amount must be a multiple of 500.\n");
    }
    else if (code == -1)
    {
        printf("Error: Insufficient balance.\n");
    }
    else if (code == -2)
    {
        printf("Error: Minimum balance of Rs. 1000 must be maintained.\n");
    }
}

int main()
{
    float balance = 10000, amount;
    int code;

    printf("Balance: %.2f\n", balance);

    while (1)
    {
        printf("\nEnter amount (0 to exit): ");
        scanf("%f", &amount);

        if (amount == 0)
        {
            break;
        }

        code = validateWithdrawal(balance, amount);

        showMessage(code);

        if (code == 1)
        {
            balance = withdraw(balance, amount);
            printf("New balance: %.2f\n", balance);
        }
    }

    return 0;
}

