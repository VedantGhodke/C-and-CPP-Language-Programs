#include <stdio.h>
unsigned long amount=1000000, deposit, withdraw;
int choice, pin, k;
char transaction ='y';
void main()
{
	while (pin != 1234)
	{
		printf("PLEASE ENTER YOUR PIN ");
		scanf("%d", &pin);
		if (pin != 1234)
		printf("THE PIN YOU ENTERED IS INCORRECT! PLEASE ENTER VALID PIN!\n");
	}
	do
	{
		printf("********Welcome to VIT ATM Service**************\n");
		printf("1. Check Balance\n");
		printf("2. Withdraw Cash\n");
		printf("3. Deposit Cash\n");
		printf("4. Apply for Instant Personal Loan\n");
		printf("5. Quit\n");
		printf("************************************************\n\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			printf("\n YOUR BALANCE IS Rs : %lu ", amount);
			break;
		case 2:
			printf("\n ENTER THE AMOUNT TO WITHDRAW: ");
			scanf("%lu", &withdraw);
			if (withdraw % 100 != 0)
			{
				printf("\n PLEASE ENTER THE AMOUNT IN MULTIPLES OF 100");
			}
			else if (withdraw >(amount - 500))
			{
				printf("\n INSUFFICENT BALANCE");
			}
			else
			{
				amount = amount - withdraw;
				printf("\n\n PLEASE COLLECT CASH");
				printf("\n YOUR CURRENT BALANCE IS%lu", amount);
			}
			break;
		case 3:
			printf("\n ENTER THE AMOUNT TO DEPOSIT");
			scanf("%lu", &deposit);
                        amount = amount + deposit;
			printf("YOUR BALANCE IS %lu", amount);
			break;
		case 4:
		    printf("\n Unplanned or emergency expenses can crop up at any time in our life");
		    printf("\n If you are planning to get married or want to indulge in an exotic vacation and are falling short of funds, then worry no more.");
		    printf("\n Instead, it is indeed a good idea to explore the option of taking personal loans to meet these expenses.");
		    printf("\n Personal loans have emerged as a great way to finance purchases that otherwise would have been challenging.");
		    printf("\n FOR ANY FURTHER ASSISTANCE, KINDLY CONTACT OUR NEAREST BRANCH OR CALL OUR TOLL FREE NUMBER : 1800123123");
		case 5:
			printf("\n THANK YOU FOR USING VIT ATM SERVICES");
			break;
		default:
			printf("\n INVALID CHOICE");
		}
		printf("\n\n\n DO YOU WISH TO HAVE ANOTHER TRANSCATION?(Y/N): \n");
		fflush(stdin);
		scanf("%c", &transaction);
		if (transaction == 'n'|| transaction == 'N')
                    k = 1;
	} while (!k);
	printf("\n\n THANKS FOR USING OUT ATM SERVICE");
}
