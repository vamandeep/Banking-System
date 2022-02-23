#include<stdio.h>
void checkDetails();
int totalAmount=1000,amount,amo,tr,totalDeposit=0,totalWithdraw=0,totalTransfer=0,accno=0;
char name[50];
void final()
{
    printf("********************************* \n");
    printf("\n YOUR NAME : %s",name);
    printf("\n YOUR ACCOUNT NUMBER : %d",accno);
    
    checkDetails();
    printf("\n THANK YOU");
}
void deposit()
{
    printf("Enter the amount you want to deposit");
    scanf("%d",&amount);
    totalAmount=totalAmount+amount;
    totalDeposit=totalDeposit+amount;
}
void withdraw()
{
    printf("Enter the amount you want to withdraw");
    scanf("%d",&amo);
    if(amo<=totalAmount)
    totalAmount=totalAmount-amo;
    else
    printf("ACCOUNT HAI NO MONEY LEFT");
    
    totalWithdraw+=amo;
}
void transfer()
{
    printf("Enter the amount you want to tranfer");
    
    scanf("%d",&tr);
     if(tr<=totalAmount)
    totalAmount=totalAmount-tr;
    else
    printf("ACCOUNT HAI NO MONEY LEFT");
    totalTransfer+=tr;
}
void checkDetails()
{
    printf("\n TOTAL AMOUNT : %d",totalAmount);
    printf("\n TOTAL DEPOSITED AMOUNT : %d",totalDeposit);
    printf("\n TOTAL WITHDRAW : %d",totalWithdraw);
    printf("\n TOTAL TRANSFER : %d",totalTransfer);
    
}
int list()
{
    int ch;
    printf("\n 1-DEPOSIT AMOUNT");
    printf("\n 2-WITHDRAW AMOUNT");
    printf("\n 3-TRANSFER AMOUNT");
    printf("\n 4-CHECK DETAILS");
    printf("\n 5-EXIT  \n");
    printf("\n ENTER YOUR CHOICE:");
    scanf("%d",&ch);
    return ch;
}
int main()
{
    printf("\n ENTER YOUR NAME ");
    scanf("%s",name);
    printf("\n ENTER YOUR ACCOUNT NUMBER" );
    scanf("%d",&accno);
    int flag=0;
    while(flag==0)
    {
        switch(list())
        {
         case 1:
            deposit();
            break;
         case 2:
            withdraw();
            break;
         case 3:
            transfer();
            break;
         case 4:
            checkDetails();
            break;
         case 5:
            final();
            flag=1;
            break;
         default:
           printf("\n Invalid choice");
         
        }
    }

    return 0;
}
