#include <iostream>
#include <cmath>
using namespace std;


//use equation y= floor(x*10+.5)/1 or 10 or 100 or 1000
//a
double Integer(double value)
{
    //divided by 1
    return floor(value * 1 + .5) / 1;
}
//b
double Tenths(double value)
{
    //divided by 10
    return floor(value * 10 + .5) / 10;
}
//c
double Hundreths(double value)
{
    //divided by 100
    return floor(value * 100 + .5) / 100;
}

//d
double Thousandths(double value)
{
    //divided by 1000
    return floor(value * 1000 + .5) / 1000;
}

int main()
{
    double value;
    cout << " Enter value: ";
    cin >> value;
    cout << "The orginal number is " << value << endl
         << "Roundest to the nearest integer " << Integer(value) << endl
         << "Roundest to the nearest tenths " << Tenths(value) << endl
         << "Roundest to the nearest hundreths " << Hundreths(value) << endl
         << "Roundest to the nearest thousandths " << Thousandths(value) << endl;
    return 0;
}

/*


cd "/Users/prithbalaji/Desktop/C++/fin/" && g++ 2.cpp -o 2 && "/Users/prithbalaji/Desktop/C++/fin/"2
prithbalaji@Prithvis-MBP C++ % cd "/Users/prithbalaji/Desktop/C++/fin/" && g++ 2.cpp -o 2 && "/Users/prithbalaji/Desktop/C++/fin/"2
 Enter value: 5.92482
The orginal number is 5.92482
Roundest to the nearest integer 6
Roundest to the nearest tenths 5.9
Roundest to the nearest hundreths 5.92
Roundest to the nearest thousandths 5.925



*/