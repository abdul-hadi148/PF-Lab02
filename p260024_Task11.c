#include<stdio.h>
int main()
{
 float Sub_Total;
 float GST;
 float Grand_Total; 
 int Q1=3,Q2=4,Q3=2;
 float T=60.00,S=40.50,CR=120.00;
 float S1,S2,S3;
printf("================ FAST CAFETERIA PECIPT =================\n");
printf("Item\t\tQty\t\tUnit Price (PKR)\tSubtotal(PKR)\n");
printf("-----------------------------------------------------\n");
S1=Q1*T;
printf("Tea\t\t\t%d\t\t%.2f\t\t\t\t%.2f\n",Q1,T,S1);
S2=Q2*S;
printf("Samosa\t\t%d\t\t%.2f\t\t\t\t%.2f \n",Q2,S,S2);
S3=Q3*CR;
printf("Chicken Roll %d\t\t%.2f\t\t\t\t%.2f  \n",Q3,CR,S3);
printf("----------------------------------------------------\n");
Sub_Total=S1+S2+S3;
printf("Subtotal:\t\t\t\t\t\t\t(PKR) %.2f  \n",Sub_Total);
GST=0.16*Sub_Total;
printf("GST (16%):\t\t\t\t\t\t\t(PKR) %.2f \n ",GST);
printf("----------------------------------------------------\n");
Grand_Total=GST+Sub_Total;
printf("Grand Total:\t\t\t\t\t\t(PKR) %.2f  \n",Grand_Total);
printf("============= THANK YOU FOR YOUR VISIT ==============\n");
return 0;



}