#include <iostream>

using namespace std;

int main()

{
    //variable names
    double score;
    double totalS = 0;
    double total = 0;
    double scoreAchieved = 0;
    double genScore = 0;
    string name;
    int numOfStudents = 0;
    int minimum;
    int maximum;
    double percent;


    //do while loop
    do

    {

        totalS = 0;

        total = 0;

        bool goagain = true;

        if (numOfStudents == 0)

        {

            cout << "Enter first student name: ";

            cin >> name;
        }

        else

        {

            cout << "Enter next student name (-1 to end): ";

            cin >> name;
        }

        if (name != "-1")

        {

            while (goagain)

            {

                if (total == 0)

                {

                    cout << "Enter " << name << "'s first score: ";

                    cin >> score;

                    scoreAchieved = scoreAchieved + score;

                    totalS = totalS + score;

                    genScore = genScore + 10;

                    total = total + 10;

                    minimum = score;

                    maximum = score;
                }

                else

                {

                    cout << "Enter score (-1 to end): ";

                    cin >> score;

                    if (score != -1)

                    {

                        scoreAchieved = scoreAchieved + score;

                        totalS = totalS + score;

                        genScore = genScore + 10;

                        total = total + 10;

                        if (score < minimum)

                            minimum = score;

                        if (score > maximum)

                            maximum = score;
                    }

                    else

                        goagain = false;
                }
            }

            percent = (totalS / total) * 100;

            cout << endl
                 << name << " earned " << totalS << " points out of " << total << " for a score of " << percent << " percent" << endl;

            cout << name << " 's high quiz was " << maximum << ", and low quiz was " << minimum << endl
                 << endl;

            numOfStudents++;
        }

    } while (name != "-1");

    percent = (scoreAchieved / genScore) * 100;

    cout << endl
         << "The whole class earned " << scoreAchieved << " points out of " << genScore << " for a score of " << percent << " percent." << endl;

    return 0;

}

/*



cd "/Users/prithbalaji/Desktop/C++/Week 7/" && g++ Lab7.cpp -o Lab7 && "/Users/prithbalaji/Desktop/C++/Week 7/"Lab7
prithbalaji@Prithvis-MBP C++ % cd "/Users/prithbalaji/Desktop/C++/Week 7/" && g++ Lab7.cpp -o Lab7 && "/Users/prithbalaji/Desktop/C++/Week 7/"Lab7
Enter first student name: Joey
Enter Joey's first score: 10
Enter score (-1 to end): 10
Enter score (-1 to end): 10
Enter score (-1 to end): -1

Joey earned 30 points out of 30 for a score of 100 percent
Joey 's high quiz was 10, and low quiz was 10

Enter next student name (-1 to end): Suzie-Q
Enter Suzie-Q's first score: 9
Enter score (-1 to end): 10
Enter score (-1 to end): -1

Suzie-Q earned 19 points out of 20 for a score of 95 percent
Suzie-Q 's high quiz was 10, and low quiz was 9

Enter next student name (-1 to end): Brainerd
Enter Brainerd's first score: 4
Enter score (-1 to end): 3
Enter score (-1 to end): 5
Enter score (-1 to end): 2
Enter score (-1 to end): -1

Brainerd earned 14 points out of 40 for a score of 35 percent
Brainerd 's high quiz was 5, and low quiz was 2

Enter next student name (-1 to end): -1

The whole class earned 63 points out of 90 for a score of 70 percent.




*/