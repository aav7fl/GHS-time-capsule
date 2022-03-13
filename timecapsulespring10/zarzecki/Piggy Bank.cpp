//Steven Zarzecki
//Piggy Bank Program
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
     // welcome screen
     cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
     cout << "@@@@@@ Welcome to PC Piggy Bank @@@@@@" << endl;
     cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
     system ("pause");
     system ("CLS");
     
     // asks questions
     string name;
     int quarters, dimes, nickels, pennies, weeks;
     cout << " What is your name?" << endl;
     cin >> name;
     cout << " OK " << name << " how many quarters do you have?" << endl;
     cin >> quarters;
     cout << "How many dimes do you have?" << endl;
     cin >> dimes;
     cout << "How many nickels do you have?" << endl;
     cin >> nickels;
     cout << "Lastly how many pennies do you have?" << endl;
     cin >> pennies;
     cout << "How many weeks have you been saving?" << endl;
     cin >> weeks;
     
     // outputs the amounts given
     cout << "Quarters " << quarters << " Pennies " << pennies << " Dimes " << dimes << " Nickels " << nickels << endl;
     
     
     
     // adds up totals and tells the amounts
     double total, average, year;
     total = (.250*quarters + .100*dimes + .0500*nickels + .0100*pennies) * weeks;
     cout << "You managed to save $" << total << endl;
     average = total/weeks;
     cout << "That means you saved " << average << " per week." << endl;
     year = total/weeks*52;
     cout << "In one year you could save $" << year << endl;
     
     
   
    system("PAUSE");
    return EXIT_SUCCESS;
}


     

       
     
