#include<stdio.h>
int main()
{
double Basic_Salary=85000.00;
double HRent_A,Medical_A,Gross_Salary,Tax_D,Net_Salary;

printf("============ MONTHLY SALARY SLIP===========\n");

printf("Basic Salary:\t\t\t\t\tPKR %.2f\n",Basic_Salary);
HRent_A=0.20*Basic_Salary;
printf("House Rent Allowance (20%):\t\tPKR %.2f\n",HRent_A);
Medical_A=0.10*Basic_Salary;
printf("Medical Allowance (10%):\t\tPKR %.2f\n",Medical_A);

printf("--------------------------------------------\n");
Gross_Salary=Basic_Salary+HRent_A+Medical_A;
printf("Gross Salary:\t\t\t\t\tPKR %.2f\n",Gross_Salary);
Tax_D=0.05*Gross_Salary;
printf("Tax Deduction (5%):\t\t\t\tPKR %.2f\n",Tax_D);

printf("--------------------------------------------\n");
Net_Salary=Gross_Salary-Tax_D;
printf("Net Payable Salary:\t\t\t\tPKR %.2f\n",Net_Salary);
printf("=============================================\n");
return 0;
}