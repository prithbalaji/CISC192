#include <iostream>
using namespace std;

int main()
{
    string name = "Prithvi Balaji", 
        address = "5653 Shasta Daisy Trail, San Diego, California, 92130",
        telephone = "8587409101", 
        collegeMajor = "Aerospace Engineering and Computer Science";


        cout << "Name:    " << name << ".\n"<<
        "Address:    "<<address << ".\n"<< 
        "Telephone:    " << telephone  << ".\n"<<
        "College Major:    " <<collegeMajor;

        return 0;


}

/*

[Running] cd "/Users/prithbalaji/Desktop/C++/" && g++ third.cpp -o third && "/Users/prithbalaji/Desktop/C++/"third
Name:    Prithvi Balaji.
Address:    5653 Shasta Daisy Trail, San Diego, California, 92130.
Telephone:    8587409101.
College Major:    Aerospace Engineering and Computer Science
[Done] exited with code=0 in 0.911 seconds

*/