#include <stdio.h>

double power(double x,int n) {
    if (n==0) return 1;
    else if ((n%2)==0) return power(x*x,n/2);
    else return x*power(x*x,(n-1)/2);
}

int main() {
    double x;
    int n;
    printf("x와 n값은?\n");
    scanf("%lf %d",&x,&n);

    printf("결과 값=%lf\n",power(x,n));
}