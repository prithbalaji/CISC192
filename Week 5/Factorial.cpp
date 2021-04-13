#include <iostream>

using namespace std;

int main()
{
   int num, fac = 1;
   cout<<"Enter value for n: ";
   cin>>num;
   for(int i = 1;i<=num;i++){
      fac *= i;
   }
   cout<<"Factorial = "<<fac<<endl;
    return 0;
}


/*

cd "/Users/prithbalaji/Desktop/C++/Week 5/" && g++ Factorial.cpp -o Factorial && "/Users/prithbalaji/Desktop/C++/Week 5/"Factorial
prithbalaji@Prithvis-MBP C++ % cd "/Users/prithbalaji/Desktop/C++/Week 5/" && g++ Factorial.cpp -o Factorial && "/Users/prithbalaji/Desktop/C++/Week 5/"Factorial
Enter value for n: 3 
Factorial = 6

prithbalaji@Prithvis-MBP Week 5 % cd "/Users/prithbalaji/Desktop/C++/Week 5/" && g++ Factorial.cpp -o Factorial && "/Users/prithbalaji/Desktop/C++/Week 5/"Factorial
Enter value for n: 7
Factorial = 5040




*/