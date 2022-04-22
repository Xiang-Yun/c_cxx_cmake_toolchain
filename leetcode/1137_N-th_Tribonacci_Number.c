#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
#include <string.h>
#include <assert.h>
#include <math.h>



int tribonacci(int n) {
    if(n == 0) return 0;
    if(n == 1) return 1;
    if(n == 2) return 1;
    // f[k] = f[k-1] + f[k-2] + f[k-3]
    int f1 = 1, f2 = 1, f3 = 0;

    for(int i=0;i<=n-3;i++) {
        int temp1 = f1;
        int temp2 = f2;
        f1 = f1 + f2 + f3;
        f2 = temp1;
        f3 = temp2;
    }
    return f1;
}

int main(int argc, char *argv[]) {
    // for(int i=0;i<argc;i++) {
    //     printf("arg[%d]: %s\n", i, argv[i]);
    // }

    for(int i=0;i<10;i++) {
        printf("[%d]: %d\n", i, tribonacci(i));
    }


}

