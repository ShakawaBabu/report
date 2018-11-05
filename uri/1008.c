#include<stdio.h>
double main()
{
    int id, hours;
    float amount;

    scanf("%d %d %f", &id, &hours, &amount);
    printf("NUMBER = %d\n",id);

    printf("SALARY = U$ %.2f\n", hours *amount);

    return 0;
}
