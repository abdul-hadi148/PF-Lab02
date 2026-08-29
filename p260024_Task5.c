#include<stdio.h>
int main()
{
float Celcius=37.5;
float Kelvin;
float Fahrenheit;
printf("============== TEMPERATURE CONVERSION ============== \n");
printf("Temperature in Celcius: \t\t%.2f *C\n",Celcius);
Kelvin=Celcius+273.15;
printf("Temperature in Kelvin: \t\t\t%.2f *K\n",Kelvin);
Fahrenheit=(Celcius*9.0/5.0)+32.0;
printf("Temperature in Fahrenheit: \t\t%.2f *F\n",Fahrenheit);
printf("==========================================================");
return 0;
}