#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    for (int i = num-1; i >= 1; --i) {
        if (num % i == 0) {
            cout << "The largest factor of " << num << " is " << i << endl;
            break;
        }
    }
    return 0;
}

/* prithbalaji@Prithvis-MBP C++ % cd "/Users/prithbalaji/Desktop/C++/Week 4/" && g++ fourthlab.cpp -o fourthlab && "/Users/prithbalaji/Desktop/C++/Week 4/"fourthlab
Enter a number: 24
The largest factor of 24 is 12
*/