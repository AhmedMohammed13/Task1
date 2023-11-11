#include <iostream>
using namespace std;

int sumOfEvenNumbers(int start, int end) {
    int sum = 0;
    for (int i = start; i <= end; i++) {
        if (i % 2 == 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int start = 1;
    int end = 100;
    int sum = sumOfEvenNumbers(start, end);
    cout << "The sum of all even numbers between " << start << " and " << end << " is " << sum << "." << endl;
    return 0;
}
