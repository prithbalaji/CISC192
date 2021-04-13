#include <iostream>
#include <cmath>

#define PINUM 3.14159
#define MINSLICES 16.225

using namespace std;

int main() {
    //initalize first section of variables
   int diameter, users, slices; 


   cout << "Enter pizza diameter (inches): ";

   cin >> diameter;

   cout << "Enter number of people: ";

   cin >> users;

   cout << "Enter average number slices per person: ";

   cin >> slices;

   //initalize second section of variables
    double area = (PINUM*diameter*diameter)/4.0;
    int slicesperpizza = floor(area/MINSLICES);
    int totalslices = slices * users;
    int numpizzas = ceil(totalslices/(double)slicesperpizza);

    //final statement
   cout << "Each " << diameter << " inch pizza yields " << slicesperpizza << " slices. You should order " << numpizzas << " pizzas for " << users << " people." << endl;
   return 0;
}

/*

TERMINAL:

Case 1:
prithbalaji@Prithvis-MBP C++ % cd "/Users/prithbalaji/Desktop/C++/Week 3/" && g++ fifth.cpp -o fifth && "/Users/prithbalaji/Desktop/C++/Week 3/"fifth
Enter pizza diameter (inches): 16
Enter number of people: 13
Enter average number slices per person: 3
Each 16 inch pizza yields 12 slices. You should order 4 pizzas for 13 people.

Case 2:
prithbalaji@Prithvis-MBP Week 3 % cd "/Users/prithbalaji/Desktop/C++/Week 3/" && g++ fifth.cpp -o fifth && "/Users/prithbalaji/Desktop/C++/Week 3/"fifth
Enter pizza diameter (inches): 12
Enter number of people: 8
Enter average number slices per person: 2
Each 12 inch pizza yields 6 slices. You should order 3 pizzas for 8 people.


*/