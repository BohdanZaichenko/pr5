#include <stdio.h>
#include <stdlib.h>

int countsequences(int n) {

    int dp[n+1];
    dp[0]=1;
    dp[1]=2;
    dp[2]=3;

    for (int i=3; i<=n; i++) {
        dp[i]=(dp[i-1]+dp[i-2])%12345;
    }

    return dp[n];
}

int main() {

    printf("Zaichenko Bohdan IPZ-22008b\n");

    int n;

    printf("\nInput length of sequence n: ");
    scanf("%d", &n);

    if (n<=1 || n>=10000) {
        printf("\n!!ERROR!!");
        return 0;
    }

    int result=countsequences(n);
    printf("\nNumber of valid sequences of length n: %d\n", result);

    return 0;
}
