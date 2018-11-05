#include<stdio.h>
int main()
{
    double distance,average,result;
    scanf("%lf %lf", &distance,&average);
    result =distance*average;
    printf("%.3lf\n",result/12);
    return 0;
}

