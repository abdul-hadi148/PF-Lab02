#include<stdio.h>
int main()
{
float PF=88.0;
float Calculus=76.5;
float AP=82.0;
int C1=3,C2=3,C3=2;
int Total_Credits;
double Average;
float Total_Score;
printf("=============SEMESTER ACADEMIC REPORT =============\n");
printf("Course\t\t\t\tCredits Hours\t\tObtain Marks\n");
printf("-------------------------------------------------------\n");
printf("Programming Fundamentals\t\%d\t\t\t%.2f\n",C1,PF);
printf("Calculus\t\t\t\t\t\%d\t\t\t%.2f\n",C2,Calculus);
printf("Applied Physics\T\t\t\t\%d\t\t\t%.2f\n",C3,AP);
printf("--------------------------------------------------------\n");
Total_Credits=C1+C2+C3;
Total_Score=(PF*C2)+(Calculus*C2)+(AP*C3);
Average=Total_Score/Total_Credits;
printf("Total Credits\t\%d\tWeighted Average\t%.2f\%\t\t\n",Total_Credits,Average);
printf("========================================================\n");
return 0;
}