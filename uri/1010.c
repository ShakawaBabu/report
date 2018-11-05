 #include<stdio.h>
 int main()
 {
     int code,unit;
     double price, pay, total;
     scanf("%d %d %lf", &code,&unit,&price);
     pay =unit * price;
     scanf("%d %d %lf", &code,&unit,&price);
     total =pay + unit * price;
      printf("VALOR A PAGAR: R$ %.2lf\n", total);
      return 0;
 }
