#include<iostream>
using namespace std;
int main()
{
  
   int value;
   cout<<"Enter max value of stars per row: ";
   cin>>value;
   int y=0;
   int z=0;
  
  
   //a

   //loop1

   cout<<"(a)\n";
  
   for(y=0;y<value;y++)
   {
       for(z=0;z<=(y);z++)
       {
           
           cout<<"*";  
       }  
       cout<<"\n";
   }
  
  
      
   //b
   //loop 2
   cout<<"(b)\n";
  
  
   for(y=0;y<value;y++)
   {
       for(z=value;z>y;z--)
       {
           
           cout<<"*";  
       }  
       cout<<"\n";
   }
  
  
      
   //c
   //loop 3
   cout<<"(c)\n";
  
  
   for(y=0;y<value;y++)
   {
       
       for(z=0;z<y;z++)
       {
           cout<<" ";
       }
      
       for(z=value;z>y;z--)
       {
           
           cout<<"*";  
       }  
       cout<<"\n";
   }
  


       //d
       //loop 4
   cout<<"(d)\n";
  
  
   for(y=0;y<value;y++)
   {
       
       for(z=value-1;z>y;z--)
       {
           cout<<" ";
       }
      
       for(z=0;z<=y;z++)
       {
           
           cout<<"*";  
       }  
       cout<<"\n";
   }
      
  
  
  
   return 0;
}


/*



prithbalaji@Prithvis-MBP fin % cd "/Users/prithbalaji/Desktop/C++/fin/" && g++ 3.cpp -o 3 && "/Users/prithbalaji/Desktop/C++/fin/"3
Enter max value of stars per row: 10
(a)
*
**
***
****
*****
******
*******
********
*********
**********
(b)
**********
*********
********
*******
******
*****
****
***
**
*
(c)
**********
 *********
  ********
   *******
    ******
     *****
      ****
       ***
        **
         *
(d)
         *
        **
       ***
      ****
     *****
    ******
   *******
  ********
 *********
**********

*/