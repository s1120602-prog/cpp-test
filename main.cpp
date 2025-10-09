#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    
    for (int i = 1; i <= 50; i++) {
        if (i % 7 == 0) {
            sum += i;  // Add i to sum if it's divisible by 7
        }
    }

    cout << "Sum of multiples of 7 betwe
