#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        
        // Printing "I"
        for(int j=1;j<=n;j++){
            if(i==1 && j<=n){
                printf("*");
            } else if(i==n && j<=n){
                printf("*");
            } else if(j==n/2+1){
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("  ");
        
        // Printing "N"
        for(int j=1;j<=n;j++){
            if(j==1){
                printf("*");
            } else if(i==j){
                printf("*");
            } else if(j==n){
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("  ");
        
        // Printing "N"
        for(int j=1;j<=n;j++){
            if(j==1){
                printf("*");
            } else if(i==j){
                printf("*");
            } else if(j==n){
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("  ");
        
        // Printing "O"
        for(int j=1;j<=n;j++){
            if((i==1 || i==n) && j!=1 && j!=n){
                printf("*");
            } else if((j==1 || j==n) && i!=1 && i!=n){
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("  ");
        
        // Printing "V"
        for(int j=1;j<=n;j++){
            if(i==j){
                printf("*");
            } else {
                printf(" ");
            }
        }
        for(int j=2;j<=n;j++){
            if(i+j==n+1){
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("   ");
        
        // Printing "A"
        for(int j=1;j<=n;j++){
            if((j==1 || j==n) && i>1){
                printf("*");
            } else if(i==1 && j!=1 && j!=n){
                printf("*");
            } else if(i==n/2+1){
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("  ");
        
        // Printing "T"
        for(int j=1;j<=n;j++){
            if(i==1 && j<=n){
                printf("*");
            } else if(j==n/2+1){
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("  ");
        
         // Printing "I"
        for(int j=1;j<=n;j++){
            if(i==1 && j<=n){
                printf("*");
            } else if(i==n && j<=n){
                printf("*");
            } else if(j==n/2+1){
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("  ");
        
        // Printing "O"
        for(int j=1;j<=n;j++){
            if((i==1 || i==n) && j!=1 && j!=n){
                printf("*");
            } else if((j==1 || j==n) && i!=1 && i!=n){
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("  ");
        
         // Printing "N"
        for(int j=1;j<=n;j++){
            if(j==1){
                printf("*");
            } else if(i==j){
                printf("*");
            } else if(j==n){
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("  ");
        
        printf("\n");
    }
    return 0;
}