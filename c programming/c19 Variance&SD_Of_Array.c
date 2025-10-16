#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    double arr[n], sum = 0;
    for(int i=0;i<n;i++){
        scanf("%lf",&arr[i]);
        sum += arr[i];
    }
    double mean = sum/n, variance = 0;
    for(int i=0;i<n;i++){
        variance += pow(arr[i]-mean,2);
    }
    variance /= n;
    printf("Variance = %.2lf\n", variance);
    printf("Standard Deviation = %.2lf\n", sqrt(variance));
    return 0;
}
