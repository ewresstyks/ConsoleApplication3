#include <iostream>

// Необхідно оцінити складність алгоритмів

//Алгоритм 1
void algorithm1() {
    const int size = 1'000;
    int arr[size]{};
    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
}
//  O(1)

//Алгоритм 2
int algorithm2(int n) {
    for (int i = 0; i < n + 10'000; i++) {
        std::cout << i << ' ';
    }
    std::cout << std::endl;
}
// O(n)

//Алгоритм 3
int algorithm3(int n) {
    for (int j = 0; j < n * n; j++) {
        std::cout << j << ' ';
    }
    std::cout << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << i << ' ';
    }
    std::cout << std::endl;
}
// O(n?)

//Алгоритм 4
int algorithm4(int arr[], int n) {
    return arr[n];
}
// O(1)

//Алгоритм 5*
int algorithm4(int n) {
    int power = 1;
    while (power * 2 <= n) {
        power *= 2;
    }
    return n;
}
// O(log n)