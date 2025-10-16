#include <stdio.h>

int main() {
    int n, maxFreq=0, mode;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n], freq[1000]={0};
    for(int i=0;i<n;i++){ scanf("%d",&arr[i]); freq[arr[i]]++; }

    for(int i=0;i<1000;i++){
        if(freq[i]>maxFreq){
            maxFreq = freq[i];
            mode = i;
        }
    }
    printf("Mode = %d\n", mode);
    return 0;
}
