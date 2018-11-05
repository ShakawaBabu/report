 #include<stdio.h>
int main()
{
    int A, B, C,great;
    scanf("%d %d %d", &A,&B,&C);
    great=(A+B+abs(A-B))/2;
    great = (great+C+abs(great-C))/2;
    printf("%d eh o maior\n",great);
    return 0;

}
