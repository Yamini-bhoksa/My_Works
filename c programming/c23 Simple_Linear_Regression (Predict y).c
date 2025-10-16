#include <stdio.h>

int main() {
    int n;
    printf("Enter number of data points: ");
    scanf("%d",&n);
    double x[n], y[n], sumX=0, sumY=0, sumXY=0, sumX2=0;
    for(int i=0;i<n;i++){ scanf("%lf",&x[i]); sumX+=x[i]; sumX2+=x[i]*x[i]; }
    for(int i=0;i<n;i++){ scanf("%lf",&y[i]); sumY+=y[i]; sumXY+=x[i]*y[i]; }
    
    double slope = (n*sumXY - sumX*sumY) / (n*sumX2 - sumX*sumX);
    double intercept = (sumY - slope*sumX)/n;
    
    double predict;
    printf("Enter x to predict y: ");
    scanf("%lf",&predict);
    double y_pred = slope*predict + intercept;
    printf("Predicted y = %.2lf\n", y_pred);
    return 0;
}
