//Steven Zarzecki
#include <cstdlib>
#include <iostream>
#include <ctime>


using namespace std;

int main()
{
    srand (time(0));
    int theNumber = rand () % 100 +1;
    int tries = 0, guess, score, wins = 0, losses=0;
    char again = 'y';
    cout << "\nWelcome to Guess My Number\n\n";
   
         
     do 
    {
    do 
    {
        
         cout << "Enter a guess";
         cin >> guess;
         ++tries;
         
         if (guess > theNumber)
         cout << "Too High!\n\n";
         
         if (guess < theNumber)
         cout << "Too Low!!\n\n";
         
         
         }while (guess != theNumber && tries < 5 );
         
         if (guess != theNumber)
          ++losses;
         cout << "Sorry, you couldn't guess it in 5 tries!" << endl;
         
         if (guess == theNumber)
        ++wins;
         cout << "You got it in " << tries << " guesses!\n";
         
     
   
      if (tries == 5)
    {  score = 0;
      cout << "Your score is..." << score << endl;
      cout << "Great Jerb you got..." << score << endl;
      }
       cout << "You have won..." << wins  << "games" << "You have lost..." << losses << "games" << endl; 
     if (tries < 5)
      score = 10 - tries;
      
      cout << "Would you like to play again (y/n)?" << endl;
      cin >> again;
      tries =0;
      
      
     
      }while (again == 'y');
         
      
       
    system("PAUSE");
    return 0;
}
