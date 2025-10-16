#include <stdio.h>

int main() {
    int n, event=0, outcome;
    printf("Enter number of trials: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter outcomes (0 or 1 for event not happening/happening):\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]==1) event++;
    }
    double probability = (double)event/n;
    printf("Probability of event = %.2lf\n", probability);
    return 0;
}