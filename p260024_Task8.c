#include<stdio.h>
int main()
{
double Principle=250000.00;
float Rate=8.5;
int Time=3;
double I,A,MA;
printf("========== BANK LOAN INTREST REPORT ==========\n"); 
printf("Principle Amount:\t\t\tPKR %.2f\n",Principle);
printf("Annual Intrest Rate:\t\t%.2f\%\n",Rate);
printf("Loan Duration:\t\t\t\t%d Years (36 Months)\n",Time);
printf("------------------------------------------------\n");
I=(Principle*Rate*Time)/100.0;
printf("Total Accured Intrest:\t\tPKR %.2f\n",I);
A=Principle+I;
printf("Total Payable Amount:\t\tPKR %.2f\n",A);
MA=A/(Time*12.0);
printf("Monthly Installment:\t\tPKR %.2f \n",MA);
printf("==================================================\n");
}