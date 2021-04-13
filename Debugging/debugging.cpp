#include<iostream>
#include<String>
 
using namespace std;
 
int hungerLevel = 0;
int boredomLevel = 0;
int foodAmt = 3;
int funAmt = 3;
int timeAmt = 1;
string petName = "your pet";
 
int PetMood();
void Talk();
void PassTime(int);
void FeedPet();
void Play();
void DisplayPetBehavior();
void menu();
 
void main() {
       cout << "Welcome to PetSim! :)" << endl;
       cout << "What would you like to name your pet?: ";
       cin >> petName;
       cout << endl;
       menu();
 
       system("pause");
}
void menu() 
{


//impletment this function
       
}
void Talk() {
       int moodLevel = PetMood();
       string mood = "none";
       if (moodLevel < 7) {
              mood = "Happy";
       }
       else if (moodLevel >= 7 && moodLevel < 16) {
              mood = "Okay";
       }
       else if (moodLevel >= 16 && moodLevel <= 21) {
              mood = "Frustrated";
       }
       else if (moodLevel > 21) {
              mood = "Mad";
       }
       cout << petName << "'s current mood is: " << mood << endl;
 
       PassTime(timeAmt);
       DisplayPetBehavior();
}
void FeedPet() {
       if (hungerLevel >= foodAmt) {
              hungerLevel -= foodAmt;
       }
       else {
              hungerLevel = 0;
       }
 
       cout << petName << " has been fed." << endl;
 
       PassTime(timeAmt);
       DisplayPetBehavior();
}
void Play() {
       if (boredomLevel >= funAmt) {
              boredomLevel -= funAmt;
       }
       else {
              boredomLevel = 0;
       }
 
       cout << petName << " was allowed to play." << endl;
       PassTime(timeAmt);
       DisplayPetBehavior();
}
void PassTime(int timeAmt) {
       hungerLevel += timeAmt;
       boredomLevel += timeAmt;
}
int PetMood() {
       int mood = hungerLevel + boredomLevel;
       return mood;
}
void DisplayPetBehavior() {
       if (hungerLevel < 3 && boredomLevel < 3) {
              cout << petName << " is neither hungry or bored." << endl;
       }
       else if (boredomLevel >= 3 && boredomLevel <= 11) {
              cout << petName << " is a little bored." << endl;
       }
       else if (boredomLevel > 11) {
              cout << petName << " is very bored." << endl;
       }
       if (hungerLevel >= 3 && hungerLevel <= 11) {
              cout << petName << " is moderately hungry." << endl;
       }
       else if (hungerLevel > 11) {
              cout << petName << " is very hungry." << endl;
       }
       cout << "Hunger Level: " << hungerLevel << endl
              << "Boredom Level: " << boredomLevel << endl;
}
 
 
/* OUTPUT
Welcome to PetSim! :)
What would you like to name your pet?: Sparky
 
 
What would you like to do with Sparky?
************************
1 - Listen to Pet
2 - Feed Pet
3 - Play with Pet
4 - Exit Game
Enter your choice: 1
Sparky's current mood is: Happy
Sparky is neither hungry or bored.
Hunger Level: 1
Boredom Level: 1
 
What would you like to do with Sparky?
************************
1 - Listen to Pet
2 - Feed Pet
3 - Play with Pet
4 - Exit Game
Enter your choice: 2
Sparky has been fed.
Sparky is neither hungry or bored.
Hunger Level: 1
Boredom Level: 2
 
What would you like to do with Sparky?
************************
1 - Listen to Pet
2 - Feed Pet
3 - Play with Pet
4 - Exit Game
Enter your choice: 3
Sparky was allowed to play.
Sparky is neither hungry or bored.
Hunger Level: 2
Boredom Level: 1
 
What would you like to do with Sparky?
************************
1 - Listen to Pet
2 - Feed Pet
3 - Play with Pet
4 - Exit Game
Enter your choice: 5
ERROR: Invalid selection. Please try again.
 
What would you like to do with Sparky?
************************
1 - Listen to Pet
2 - Feed Pet
3 - Play with Pet
4 - Exit Game
Enter your choice: 4
Exiting...
*/
