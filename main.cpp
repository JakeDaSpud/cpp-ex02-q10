#include <iostream>

//Write a recursive function fibonacci( int n ); that returns the Nth Fibonacci number for the
//argument N. The Fibonacci sequence is 0,1,1,2,3,5,8,13,…, where each value in the
//sequence is the sum of the previous two values. The first Fibonacci number, F(1) , is 0, the
//second Fibonaccci number F(2) is 1, the third Fibonacci number F(3) is 1. The Nth Fibonacci
//number, F(N), is defined as the sum of the (N-1)th Fibonacci number and the (N-2)th Fibonacci
//number. So, F(N) = F(N-1) + F(N-2). Using your function, print out the first 10 Fibonacci
//numbers.

int fibonacci(int n) {
    int f_N;

    //fib(0) = 0, fib(1) = 1, preset numbers
    if (n == 0 || n == 1) {
        return n;
    }

    f_N = fibonacci(n-1) + fibonacci(n-2);
    return f_N;
}

int main() {

    for (int i = 0; i < 10; i++) {
        std::cout << "fibonacci(" << i+1 << ") = " << fibonacci(i) << std::endl;
    }

    return 0;
}
