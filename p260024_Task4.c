#include<stdio.h>
int main()
{
char Alphabet='M';
int Number=42;
float Pi=3.141590;
double Percentage=98.765432;
printf("Type Name\t\tVariable Value\t\tSize in Memory\n");
printf("---------------------------------------------------\n");
printf("char\t\t\t\'%c\'\t\t\t\t%d byte(s)\n",Alphabet,(int)sizeof(Alphabet));
printf("int\t\t\t\t%d\t\t\t\t%d byte(s)\n",Number,(int)sizeof(Number));
printf("float\t\t\t%f\t\t%d byte(s)\n",Pi,(int)sizeof(Pi));
printf("double\t\t\t%.6f\t\t%d byte(s)\n",Percentage,(int)sizeof(Percentage));
printf("---------------------------------------------------\n");
return 0;
}