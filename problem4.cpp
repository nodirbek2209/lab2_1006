#include <iostream>

void N_printTriangle(int N_n) {
    for (int N_i = N_n; N_i > 0; --N_i) {
        for (int N_j = 0; N_j < N_i; ++N_j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

void N_printSquare(int N_n) {
    for (int N_i = 0; N_i < N_n; ++N_i) {
        for (int N_j = 0; N_j < N_n; ++N_j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

int main() {
    int N_n;
    std::cin >> N_n;

    // Print triangle pattern
    N_printTriangle(N_n);

    std::cout << std::endl;

    // Print square pattern
    N_printSquare(N_n);

    std::cout << std::endl;

    // Print square value of n
    std::cout << N_n * N_n << std::endl;
    //O(n^2)
    return 0;
}
