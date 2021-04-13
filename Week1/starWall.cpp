#include<iostream>
using namespace std;
int main()
{
  
   for(int i=0;i<5;i++)// for loop 
   {
        if(i%2==0)
            {
                cout<<"***** \n\n";   
             }
        else
            {
                cout<<"** \n\n";   
            }
   }


}

/*[Running] cd "/Users/prithbalaji/Desktop/C++/" && g++ second.cpp -o second && "/Users/prithbalaji/Desktop/C++/"second
***** 

** 

***** 

** 

***** 


[Done] exited with code=0 in 0.433 seconds*/