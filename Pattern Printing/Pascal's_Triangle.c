#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        for(int k = 1; k <= n-i-1; k++)
            printf(" ");
            
        int num = 1;
        for(int j = 0; j <= i; j++) {
            printf("%d", num);
            if(j < i)
                printf(" ");
            num = num * (i - j) / (j + 1);
        }
        printf("\n");
    }
    return 0;
}