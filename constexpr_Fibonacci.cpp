#include <bits/stdc++.h>

using namespace std;

template<int N>
struct Fibonacci {
    static const int value = Fibonacci<N - 1>::value + Fibonacci<N - 2>::value;
};

template<>
struct Fibonacci<0> {
    static const int value = 0;
};

template<>
struct Fibonacci<1> {
    static const int value = 1;
};

constexpr int val = 5;
int fib = Fibonacci<val>::value;  // fib5 es 5

int main()
{
    cout << fib;
}