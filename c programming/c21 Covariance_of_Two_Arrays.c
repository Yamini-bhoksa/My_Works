#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    double x[n], y[n], sumX=0, sumY=0;
    for(int i=0;i<n;i++){ scanf("%lf",&x[i]); sumX+=x[i]; }
    for(int i=0;i<n;i++){ scanf("%lf",&y[i]); sumY+=y[i]; }

    double meanX = sumX/n, meanY = sumY/n;
    double cov = 0;
    for(int i=0;i<n;i++){
        cov += (x[i]-meanX)*(y[i]-meanY);
    }
    cov /= n;
    printf("Covariance = %.2lf\n", cov);
    return 0;
}
