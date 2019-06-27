#include <stdio.h>
#include <math.h>

int main() {
    double L,a;
    while(scanf("%lf %lf",&L,&a)==2){
        double v = sqrt(2*a*L);
        double vaci = (3600*v)/(L+v*v/2/a);
        printf("%.8lf %.8lf\n",v,vaci);
    }
    return  0;
}
