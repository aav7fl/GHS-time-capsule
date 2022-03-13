//Steven Zarzecki
#include <iostream>

using namespace std;
void menu();
int dragons();
int elves();
int soldiers();





int main()
{
    
    menu();
    dragons();
    elves();
    soldiers();
    cout << "Your total score is..." << dragons()+elves()+soldiers() << endl;
    system("PAUSE");
    return 0;
   
}
void menu()
{
     cout << "Welcome to FATALITY!!!\n\n";
     }
int dragons()
{
    int deaths, score1;
    cout << "Please enter the amount of DRAGONS you managed to slay somehow!\n";
    cin >> deaths;
    score1 = deaths*10;
    cout << "Your score for dragons is..." << score1 << " points\n";
  return score1;
    
   
   
}
int elves()
{
    int deaths2, score2;
    cout << "Please enter the amount of fruity elves you slayed!\n";
    cin >> deaths2;
    score2 = deaths2*10;
    cout << "Your score for elves is..." << score2 << " points\n";
   return score2;
    
}
int soldiers()
{
    int deaths3, score3;
    cout << "Please enter the number of brave soldiers you exploded!\n";
    cin >> deaths3;
    score3 = deaths3*10;
    cout << "Your score for soldiers is..." << score3 << " points\n";
   return score3;
   
}

