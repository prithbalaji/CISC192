#include <iostream>

using namespace std;

int main() {

int col;

    cout << "Enter height: ";

    cin >> col;

    cout << string(col,' ') << "*" << endl;

        for(int i=col-1; i>0; i--)

            cout << string(i,' ') << "*" << string((col-i)*2-1,' ') << "*" << endl;

        for(int i=2; i<col; i++)

    cout << string(i,' ') << "*" << string((col-i)*2-1,' ') << "*" << endl;

    cout << string(col,' ') << "*" << endl;

}

/*

prithbalaji@Prithvis-MBP Week 4 % cd "/Users/prithbalaji/Desktop/C++/Week 4/" && g++ fourthlab2.cpp -o fourthlab2 && "/Users/prithbalaji/Desktop/C++/Week 4/"fourthlab2
Enter height: 5
     *
    * *
   *   *
  *     *
 *       *
  *     *
   *   *
    * *
     *
     
     */
    