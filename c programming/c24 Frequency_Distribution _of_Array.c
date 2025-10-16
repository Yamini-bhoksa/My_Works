#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);

    int freq[1000] = {0}; // assuming elements <= 999
    for(int i=0;i<n;i++) freq[arr[i]]++;

    printf("Element : Frequency\n");
    for(int i=0;i<1000;i++){
        if(freq[i]!=0) printf("%d : %d\n", i, freq[i]);
    }
    return 0;
}
