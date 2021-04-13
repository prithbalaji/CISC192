#include <iostream>
#include <String>
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

int main()
{
    cout << "Welcome to PetSim! :)" << endl;
    cout << "What would you like to name your pet?: ";
    cin >> petName;
    menu();
    system("pause");
    return 0;
}

void menu()
{
    int choose = 0;
    //implement function

    do
    {
        //write text for output
        cout << "What would you like to do with " << petName << "?"
             << "\n************************"
             << "\n1 - Listen to Pet"
             << "\n2 - Feed Pet"
             << "\n3 - Play with Pet"
             << "\n4 - Exit Game" << endl;
        cout << "Enter choose: ";
        cin >> choose;

        //all scenarios of choices
        switch (choose)
        {
        case 1:
            Talk();
            break;
        case 2:
            FeedPet();
            break;
        case 3:
            Play();
            break;
        case 4:
            cout << "Exiting" << endl;
            break;
        default:
            cout << "ERROR: Invalid selection. Please try again." << endl;
            break;
        }
    } while (choose != 4);
}

void Talk()
{

    int moodLevel = PetMood();
    string mood = "none";

    if (moodLevel < 7)
    {
        mood = "Happy";
    }
    else if (moodLevel >= 7 && moodLevel < 16)
    {
        mood = "Okay";
    }
    else if (moodLevel >= 16 && moodLevel <= 21)
    {
        mood = "Frustrated";
    }
    else if (moodLevel > 21)
    {
        mood = "Mad";
    }

    cout << petName << "\'s current mood is: " << mood << endl;
    PassTime(timeAmt);
    DisplayPetBehavior();
}

void FeedPet()
{
    if (hungerLevel >= foodAmt)
    {
        hungerLevel -= foodAmt;
    }
    else
    {
        hungerLevel = 0;
    }

    cout << petName << " has been fed." << endl;
    PassTime(timeAmt);
    DisplayPetBehavior();
}

void Play()
{

    if (boredomLevel >= funAmt)
    {
        boredomLevel -= funAmt;
    }
    else
    {
        boredomLevel = 0;
    }

    cout << petName << " was allowed to play." << endl;
    PassTime(timeAmt);
    DisplayPetBehavior();
}

void PassTime(int timeAmt)
{
    hungerLevel += timeAmt;
    boredomLevel += timeAmt;
}

int PetMood()
{
    int mood = hungerLevel + boredomLevel;
    return mood;
}

void DisplayPetBehavior()
{

    if (hungerLevel < 3 && boredomLevel < 3)
    {
        cout << petName << " is neither hungry or bored." << endl;
    }
    else if (boredomLevel >= 3 && boredomLevel <= 11)
    {
        cout << petName << " is a little bored." << endl;
    }
    else if (boredomLevel > 11)
    {
        cout << petName << " is very bored." << endl;
    }
    if (hungerLevel >= 3 && hungerLevel <= 11)
    {
        cout << petName << " is moderately hungry." << endl;
    }
    else if (hungerLevel > 11)
    {
        cout << petName << " is very hungry." << endl;
    }
    cout << "Hunger Level: " << hungerLevel << endl
         << "Boredom Level: " << boredomLevel << endl;
}

/*


cd "/Users/prithbalaji/Desktop/C++/Debugging/" && g++ debug.cpp -o debug && "/Users/prithbalaji/Desktop/C++/Debugging/"debug
prithbalaji@Prithvis-MBP C++ % cd "/Users/prithbalaji/Desktop/C++/Debugging/" && g++ debug.cpp -o debug && "/Users/prithbalaji/Desktop/C++/Debugging/"debug



Welcome to PetSim! :)
What would you like to name your pet?: Sparky
What would you like to do with Sparky?
************************
1 - Listen to Pet
2 - Feed Pet
3 - Play with Pet
4 - Exit Game
Enter choice: 1
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
Enter choice: 2
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
Enter choice: 3
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
Enter choice: 5
ERROR: Invalid selection. Please try again.
What would you like to do with Sparky?
************************
1 - Listen to Pet
2 - Feed Pet
3 - Play with Pet
4 - Exit Game

*/