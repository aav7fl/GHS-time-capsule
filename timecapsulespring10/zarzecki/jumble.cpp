//Steven Zarzecki
#include <cstdlib>
#include <iostream>
#include <string>
#include <ctime>

using namespace std;
char again;
int main()

{
    do{
          
    int score;
    enum fields {WORD, HINT, NUM_FIELDS};
    const int NUM_WORDS = 5;
    const string WORDS[NUM_WORDS][NUM_FIELDS] = 
    {
          {"joe", "Do you hear something annoying?"},
          {"C plus plus", "Game programming software."},
          {"huge", "Very BIG?"},
          {"burrito", "A mexican dish."},
          {"Gibson", "American made guitar company."},
          };
          srand(time(0));
          int choice = (rand() % NUM_WORDS);
          string theWord = WORDS[choice][WORD];
          string theHint = WORDS[choice][HINT];
          
          string jumble = theWord;
          int length = jumble.size();
          for (int i = 0; i <length; ++i)
          {
              int index1 = (rand() % length);
              int index2 = (rand() % length);
              char temp = jumble[index2];
              jumble[index1] = jumble[index2];
              jumble[index2] = temp;
              }
               cout << "\t\t\tWelcome to Word Jumble!\n\n";
               cout << "Unscramble the letters to make a word.\n";
               cout << "Enter 'hint' for a hint.\n";
               cout << "Enter 'quit' to quit the game.\n\n";
               cout << "The jumble is: " << jumble;
               string guess;
               cout << "\n\nYour guess: ";
               cin >> guess;
               while ((guess != theWord) && (guess != "quit"))
               {
                     if (guess == "hint")
                     cout << theHint;
                     else
                     score = 0;
                     cout << "Sorry, that's not it.";
                     cout << "Sorry, your score is " << score << " points";
                     
                     cout << "\n\nYour guess: ";
                     cin >> guess;
                     }
                     if (guess == theWord)
                     score = 10;
                     
                     cout << "\nThat's it! Your guessed it!\n";
                     cout << "\nYou scored " << score << " points\n";
                     cout << "\nThanks for playing.\n";
                     cout << "\nWould you like to play again?";
                     cin >> again;
                     }while (again == 'y');
                     
    system("PAUSE");
    return 0;
}
