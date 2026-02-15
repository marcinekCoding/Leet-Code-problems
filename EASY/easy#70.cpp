#include <iostream>
#define MAX 45

//i need to count how many ways are possible!
//for exaple n=1 
// 1 method: 1+1+1+1+1
// 2 method 2+2+1
// 3 method 2+1+1+1
// my idea : bottom-up solution

// 2 = 11 2
// 3 = 111 21 12 = 3
// 4 = 1111 22 211 121 112 = 5=2+3
int climbStairs(int n) {
    int each_step[45];
    each_step[0]=1;
    each_step[1]=2;
    for(int i=2;i<n;i++) {
        each_step[i]=each_step[i-1]+each_step[i-2];
    }
    return each_step[n-1];
}

int main() {
    printf("metody: %d",climbStairs(5));



    return 0;
}