#include <stdio.h>

void sort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    sort(arr, n);
    if(n%2 == 0)
        printf("Median = %.2f\n", (arr[n/2 - 1] + arr[n/2])/2.0);
    else
        printf("Median = %d\n", arr[n/2]);
    return 0;
}
