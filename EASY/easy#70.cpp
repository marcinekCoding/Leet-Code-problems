#include <iostream>
#define MAX 45

//i need to count how many ways are possible!
//for exaple n=1 
// 1 method: 1+1+1+1+1
// 2 method 2+2+1
// 3 method 2+1+1+1
// my idea : bottom-up solution
int climbStairs(int n) {
    int each_step[45];
    each_step[0]=1;
    each_step[1]=2;
    for(int i=2;i<n;i++) {
        each_step[i]=each_step[i-1]+each_step[i-2];
    }
    return each_step[n-1];
}

//top-down solution (rekurencyjnie)
int climbStairs2(int n) {
    if(n==1) return 1;
    if(n==2) return 2;

    int methods=climbStairs2(n-1)+climbStairs2(n-2);
    return methods;

}

int main() {
    printf("metody: %d",climbStairs2(6));



    return 0;
}