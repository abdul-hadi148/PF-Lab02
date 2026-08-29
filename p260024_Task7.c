#include<stdio.h>
int main()
{
float vi=12.5;
float a=3.2;
float t=6.0;
float vf;
float s;
printf("========== KINAMETIC MOTION REPORT ==========\n");
printf("Initial Velocity (vi):\t %.2f m/s\n",vi);
printf("Acceleration (a):\t\t %.2f m/s^2\n",a);
printf("Time Elapsed (t):\t\t %.2f s\n",t);
printf("---------------------------------------------\n");
vf=vi+(a*t);
printf("Calculated Final Velocity (vf):\t%.2f m/s\n",vf);
s=(vi*t)+(0.5*a*t*t);
printf("Calculated Distance (s):\t\t%.2f m\n",s);
printf("==============================================\n");
return 0;
}
