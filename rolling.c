#include<stdio.h>

// Function prototypes
int countbit1(unsigned int n);
int countbit2(unsigned int n);

int main() {
    int n; 

    printf("Enter n value:");
    scanf("%d", &n);

    printf("loop rolling output: %d\n", countbit1(n));
    printf("loop unrolling output: %d\n", countbit2(n));

    return 0;
}

int countbit1(unsigned int n) {
    int bits = 0; 

    while(n != 0) {
        if(n & 1) 
            bits++; 
        n >>= 1; 
    }

    return bits; 
}

int countbit2(unsigned int n) {
    int bits = 0; 

    while(n != 0) {
        if(n & 1) 
            bits++; 
        if(n & 2) 
            bits++; 
        if(n & 4) 
            bits++; 
        if(n & 8) 
            bits++; 
        n >>= 4; 
    }

    return bits; 
}
