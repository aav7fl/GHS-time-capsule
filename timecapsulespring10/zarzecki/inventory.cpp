
#include <iostream>
#include <string>

using namespace std;
int score();
int main()
{

   const int MAX_ITEMS = 10;
    string inventory[MAX_ITEMS];
    int numItems = 0;
    inventory[numItems++] = "sword";
    inventory[numItems++] = "armor";
    inventory[numItems++] = "shield";
    
    cout << "Your items:\n";
    for (int i = 0; i < numItems; ++i)
    cout << inventory[i] << endl;
    
    cout << "\nYou trade your sword for a battle axe.";
    inventory[0] = "battle axe";
    cout << "\nYour items: \n";
    for (int i = 0; i < numItems; ++i)
    cout << inventory[i] << endl;
    
    cout << "\nThe item name '" << inventory[0] << "' has ";
    cout << inventory[0].size() << " letters in it.\n";
    
    cout << "\You find a healing potion.";
    if (numItems < MAX_ITEMS)
    inventory[numItems++] = "healing potion";
    
    cout << "\nYour found a Victorian Battle Trident!!!!! YERH!!!\n";
    if (numItems < MAX_ITEMS)
    inventory[numItems++] = "Victorian Battle Trident";
    else
        cout << "You have too many itmems and can't carry another.";
    cout << "\nYour items:\n";
    for (int i = 0; i < numItems; ++i)
    cout << inventory[i] << endl;
     system("PAUSE");
     
    
   return 0;
    
}
int score()
    {
          int numItems = 0;
           int points;
           points = numItems*5;
           cout << "Due to the amount of items you obtained your score is " << points << " points\n\n";
           return points;
           }
           
           
