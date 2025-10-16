#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    double arr[n], sum=0, mean, std=0;
    for(int i=0;i<n;i++){ scanf("%lf",&arr[i]); sum+=arr[i]; }
    mean = sum/n;
    for(int i=0;i<n;i++) std += (arr[i]-mean)*(arr[i]-mean);
    std = sqrt(std/n);

    printf("Z-scores:\n");
    for(int i=0;i<n;i++) printf("%.2lf ", (arr[i]-mean)/std);
    return 0;
}
