#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    double x[n], y[n], sumX=0, sumY=0, sumXY=0, sumX2=0, sumY2=0;
    for(int i=0;i<n;i++){ scanf("%lf",&x[i]); sumX+=x[i]; sumX2+=x[i]*x[i]; }
    for(int i=0;i<n;i++){ scanf("%lf",&y[i]); sumY+=y[i]; sumY2+=y[i]*y[i]; sumXY+=x[i]*y[i]; }
    
    double r = (n*sumXY - sumX*sumY) / sqrt((n*sumX2 - sumX*sumX)*(n*sumY2 - sumY*sumY));
    printf("Correlation coefficient = %.2lf\n", r);
    return 0;
}
