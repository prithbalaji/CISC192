#include <iostream>

using namespace std;

int reverseNum(int num)

{

    int ans = 0;

    while (num > 0)

    {

        int s = num % 10;

        ans = 10 * ans + s;

        num /= 10;
    }

    return ans;
}

int main()

{

    int num;

    cout << "Integer value please: ";

    cin >> num;

    cout << "\nThe reverse integer for the given input is : " << reverseNum(num);

    return 0;
}

/*

prithbalaji@Prithvis-MBP fin % cd "/Users/prithbalaji/Desktop/C++/fin/" && g++ 1.cpp -o 1 && "/Users/prithbalaji/Desktop/C++/fin/"1
Integer value please: 7631

The reverse integer for the given input is : 1367


*/