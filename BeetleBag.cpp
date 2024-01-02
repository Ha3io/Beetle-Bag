#include <iostream>


int main() {
    int t;
    int c;
    int n;
    int w;
    int f;
    do {
        std::cin >> t;
    } while (t < 1 || t > 25);

    int* max = new int[t];
    for (int i = 0; i < t; i++) {
        do {
            std::cin >> c >> n;
        } while (c < 1 || n < 1 || c > 200 || n > 500);
        int* result = new int [n];
        for (int j = 0; j < n; j++) {
            do {
                std::cin >> w >> f;
            } while (w > c || w < 1 || f < 1|| w > 100 || f > 1000);
            result[j] = f;
        }
        max[i] = result[0];

        for (int j = 0; j < n; j++) {
            if (result[j] > max[i]) {
                max[i] = result[j];
            }
        }
    }

    for (int i = 0; i < t; i++) {
        std::cout << max[i] << std::endl;
    }
    return 0;
}
