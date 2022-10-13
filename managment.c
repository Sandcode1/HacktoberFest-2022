#include <stdio.h>
#include<stdlib.h>
int display();
void deposite();
void withdraw();
void transfer();
void full_details();
int amount, total_amount, withdraw_amount, deposite_amount=0, transfer_money=0,total_deposite=0,total_withdraw=0,choice,total_transfer=0,acount_number,phone;
char s[100];
int main()
{

    printf("******************************************************CREATED BY RAHUL KUMAR*****************************************************************\n\n\n\n");
    printf("ENTER YOUR FULL NMAE\n");
    gets(s);
    printf("ENTER YOUR ACCOUNT NUMBER\n");
    scanf("%d",&acount_number);
    printf("ENTER THE AMOUNT TO OPEN THE BANK ACCOUNT\n");
    scanf("%d", &total_amount);
    printf("ENTER THE MOBILE NUMBER\n");
    scanf("%d",&phone);
    printf("************************************************YOUR ACCOUNT HAS BEEN CREATED SUCESSFULLY*****************************************************\n\n\n\n");
    for (int i = 0; i < 1000000;i++)
    {
        switch (display())
        {
        case 1:
            deposite();
            total_deposite+=amount;
            break;
        case 2:
            withdraw();
            if(withdraw_amount<=total_amount);
            total_withdraw+=withdraw_amount;

            break;
        case 3:
            transfer();
            if(transfer_money<=total_amount)
            {
                total_transfer+=transfer_money;
            }
            break;
        case 4:
            full_details();
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("\n INVALID OPTION !");
        }
    }
    return 0;
}
int display()

{
    printf("\n 1.DEPOSITE CASH");
    printf("\n 2.WITHDRAW CASH");
    printf("\n 3.TRANSFER MONEY");
    printf("\n 4.YOUR PASSBOOK");
    printf("\n 5.EXIT");
    printf("\n ENTER YOUR CHOICE\n");
    scanf("%d",&choice);
    return (choice);
}
void deposite()
{
    printf("ENTER THE AMOUNT:\n");
    scanf("%d",&amount);
    total_amount+=amount;

}
void withdraw()
{
    printf("ENTER THE AMOUNT:\n");
    scanf("%d",&withdraw_amount);
    if(withdraw_amount<=total_amount)
    {
        total_amount-=withdraw_amount;
    }
    else
    {
        printf("\n OPPS!SOMTHING WENT WRONG");
    }

}
void transfer()
{
    printf("ENTER THE AMOUNT:\n");
    scanf("%d",&transfer_money);
    if(transfer_money<=total_amount)
    {
        total_amount-=transfer_money;
    }
    else
    {
        printf("\n OPPS!SOMTHING WENT WRONG");
    }
}
void full_details()
{
    printf("\n******************************************************************************************************************************************************************");
    printf("\n FULL NMAE:%s",s);
    printf("\n ACCOUNT NUMBER :%d",acount_number);
    printf("\n MOBILE NO:%d",phone);
    printf("\n TOTAL AMOUNT IS %d",total_amount);
    printf("\n TOTAL AMOUNT TO DEPOSITE IS %d",total_deposite);
    printf("\n TOTAL WITHDRAW MONEY IS %d",total_withdraw);
    printf("\n TOTAL TRANSFER MONEY IS %d",total_transfer);
    printf("\n************************************************************THANK YOU***********************************************************************************************");
}
