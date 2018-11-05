 #include<stdio.h>
int main()
{
    double x1,x2,y1,y2,Distance;
    scanf("%lf %lf %lf %lf",&x1,&x2,&y1,&y2);
    Distance= sqrt(((x1-y1)*(x1-y1))+((x2-y2)*(x2-y2)));
    printf("%.4lf\n",Distance);
    return 0;

}
