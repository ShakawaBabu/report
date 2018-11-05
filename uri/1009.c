#include<stdio.h>
int main()
{
   double salary, bounas, TOTAL;
   char name;
   scanf("%s %lf %lf",&name, &salary, &bounas);
   TOTAL=0.15*bounas+salary;
   printf("TOTAL = R$ %.2lf\n",TOTAL);
   return 0;
}
