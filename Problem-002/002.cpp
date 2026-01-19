#include <iostream>
using namespace std;

int main() {
    int prev = 1;
    int current = 2;
    int sum = 0;
    int next = 0;

    while (current <= 4000000) {
        if (current % 2 == 0) {
            sum += current;
        }
        next = prev + current;
        prev = current;
        current = next;
    }
    cout << sum << endl;

    return 0;
}