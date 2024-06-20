#include <stdio.h>

double slow_power(double x,int n) {
    int i;
    double r=1.0;
    for(i=0;i<n;i++) {
        r=r*x;
    }
    return r;
}

int main() {
    double x;
    int n;
    printf("x와 n값? \n");
    scanf("%lf %d",&x,&n);

    printf("함수 결과값=%lf\n",slow_power(x,n));
}