#include <iostream>
#include <cmath>
#include <vector>

void hanoi(int n, int source, int auxiliary, int destination) {
    if (n == 0) {
        return;
    }
    hanoi(n - 1, source, destination, auxiliary);
    std::cout << source << " " << destination << std::endl;
    hanoi(n - 1, auxiliary, source, destination);
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n;
    std::cin >> n;
    std::cout << static_cast<int>(pow(2, n)) - 1 << std::endl;
    hanoi(n, 1, 2, 3);
    return 0;
}
