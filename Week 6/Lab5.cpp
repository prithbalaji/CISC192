#include <iostream>
using namespace std;

int main()
{

    int h, w;

    //input
    cout << "Enter height: ";
    cin >> h;
    cout << "Enter width: ";
    cin >> w;

    //loop to get rows

    for (int i = 0; i < h; i++)
    {

        //looping to get columns

        for (int j = 0; j < w; j++)
        {

            if (i % 2 != 0 && j % 2 != 0)
            {

                cout << "0";
            }
            else
            {

                cout << "*";
            }
        }

        cout << endl; 
    }

    return 0;
}

/*

cd "/Users/prithbalaji/Desktop/C++/Week 6/" && g++ Lab5.cpp -o Lab5 && "/Users/prithbalaji/Desktop/C++/Week 6/"Lab5
prithbalaji@Prithvis-MBP C++ % cd "/Users/prithbalaji/Desktop/C++/Week 6/" && g++ Lab5.cpp -o Lab5 && "/Users/prithbalaji/Desktop/C++/Week 6/"Lab5
Enter height: 4
Enter width: 4
****
*0*0
****
*0*0

*/