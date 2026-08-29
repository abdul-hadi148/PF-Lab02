#include<stdio.h> 
int main()
{
float Radius=7.5;
float Pi=3.14159;
float Diameter;
float Circumference;
float Area;
printf("=============== CIRCLE GEOMETRY REPORT ===============\n");
printf("Given Radius:\t\t\t\t%.3f cm\n",Radius);
Diameter=Radius*2;
printf("Calculated Diameter:\t\t%.3f cm\n",Diameter);
Circumference=2*Pi*Radius;
printf("Calculated Circumference:\t%.3f cm\n",Circumference);
Area=Pi*Radius*Radius;
printf("Calculated Area:\t\t\t%.3f sq.cm\n",Area);
printf("==========================================================");
return 0;
}