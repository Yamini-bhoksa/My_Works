#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    double arr[n], sum=0, mean, std=0, skew=0;

    printf("Enter elements:\n");
    for(int i=0;i<n;i++){
        scanf("%lf",&arr[i]);
        sum += arr[i];
    }

    mean = sum/n;

    // Calculate standard deviation
    for(int i=0;i<n;i++)
        std += pow(arr[i]-mean,2);
    std = sqrt(std/n);

    // Calculate skewness
    for(int i=0;i<n;i++)
        skew += pow((arr[i]-mean)/std, 3);
    skew /= n;

    printf("Skewness = %.4lf\n", skew);
    return 0;
}
