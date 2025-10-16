#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n], cum[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);

    cum[0] = arr[0];
    for(int i=1;i<n;i++) cum[i] = cum[i-1]+arr[i];

    printf("Cumulative Sum:\n");
    for(int i=0;i<n;i++) printf("%d ", cum[i]);
    return 0;
}
