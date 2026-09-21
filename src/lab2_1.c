#include <stdio.h>

/*
    Task:
    Write a function `int sum_to_n(int n)` that computes
    the sum of all integers from 1 up to n using a for loop.

    In main():
      - Ask user for a positive integer n
      - If n < 1, print an error
      - Otherwise, call sum_to_n and print the result
*/

int sum_to_n(int n) {
    // TODO: implement sum with a for loop
    int sum =  0;
    for (int i=1; i <= n; i++){
        sum += i;
    }
    printf("sum of the number: %d\n", sum);
    return sum; // placeholder
}

int main(void) {
    int n;

    printf("Enter a positive integer n: ");
    scanf("%d", &n); 

    while(n<1){
    printf ("N is too low. Enter new number that is at least 1: ");
    scanf("%d", &n); 
    }
    sum_to_n(n);
    

    // TODO: validate input, call function, and print result


    return 0;
}
