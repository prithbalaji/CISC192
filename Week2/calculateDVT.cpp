#include <iostream>

using namespace std;

// Constant for the speed.

#define speed 60

int main() {

  

// Variables to hold the distances.

float distance5Hours, distance8Hours, distance12Hours;

// Calculate the distance the car will travel in 5, 8, and 12 hours.

distance5Hours = speed * 5;
distance8Hours = speed * 8;
distance12Hours = speed * 12;

//Place results 

cout<<"The car will travel the following distances:\n";
cout<<distance5Hours<<" miles in 5 hours.\n";
cout<<distance8Hours<<" miles in 8 hours.\n";
cout<<distance12Hours<<" miles in 12 hours.\n";

}

/*

[Running] cd "/Users/prithbalaji/Desktop/C++/" && g++ fourth.cpp -o fourth && "/Users/prithbalaji/Desktop/C++/"fourth
The car will travel the following distances:
300 miles in 5 hours.
480 miles in 8 hoSurs.
720 miles in 12 hours.

[Done] exited with code=0 in 0.968 seconds

*/