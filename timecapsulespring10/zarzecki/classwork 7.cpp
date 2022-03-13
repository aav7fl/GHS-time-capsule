//Steven Zarzecki
#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

int main()



{
       string name;
       int choice, choiceB, choiceC, choiceF, choiceE, swordsmen, choiceD, choiceG, catapults;
       cout << "Whats your name?\n\n";
       cin >> name;
       cout << "Well " << name << " welcome to the Roman Commander Game.\n\n";
       cout << "You are the commander of the Roman Army attacking Germania\n\n";
       cout << "You have 50 archers, 25 catapults, and 100 swordsmen.\n\n";
       cout << "Germania has 61 archers, 50 catapults, and 52 swordsmen.\n\n";
       cout << "Would you like to...\n\n";
       cout << "(1) Send Archers\n\n";
       cout << "(2) Send Catapults\n\n";
       cout << "(3) Send Swordsmen\n\n";
       cout << "(4) Go Fight\n\n";
       cin >> choice;
       if (choice = 1)
       {
                  int archers, choiceA;
                  cout << "How many archers would you like to send\n";
                  cin >> archers;
                  cout << archers << endl;
                  cout << "Would you like to...\n";
                  cout << "(1) Send catapults\n";
                  cout << "(2) Send swordsmen\n";
                  cout << "(3) Send go fight\n";
                  cin >> choiceA;
                  
       if (choiceA == 1)
                   {
                   int catapults; 
                   cout << "How many catapults would you like to send?\n";
                   cin >> catapults;
                   cout << catapults << endl;
                   cout << "Would you like to...\n";
                   cout << "(1) Send Swordsmen\n";
                   cout << "(2) Go fight!\n";
                   cin >> choiceB;
                   }
       if (choiceA == 2)
                   {
                   int swords, choiceC;
                   cout << "How many swordsmen would you like to send?\n";
                   cin >> swords;
                   cout << swords << endl;
                   cout << "Would you like to...\n";
                   cout << "(1) Go fight!\n";
                   cout << "(2) Send catapults\n";
                   cin >> choiceC;
                   }
       if (choiceC == 2)
          {
                   int cata, choiceG;
                   cout << "How many catapults woudl you like to send?\n";
                   cin >> cata;
                   cout << cata << endl;
                   cout << "Would you like to...\n";
                   cout << "(1) Go fight\n";
                   cin >> choiceG;
      
       if (choiceB == 1)
                   {
                   int swords, choiceC;
                   cout << "How many swordsmen would you like to send?\n";
                   cin >> swords;
                   cout << swords << endl;
                   cout << "Would you like to...\n";
                   cout << "(1) Go fight!\n";
                   cin >> choiceC;
                   }
                   }
      if (choice == 2)
          {
                 //steven zarzecki
              int catapults, choiceD;
                  cout << "How many catapults would you like to send\n";
                  cin >> catapults;
                  cout << catapults << endl;
                  cout << "Would you like to...\n";
                  cout << "(1) Send archers\n";
                  cout << "(2) Send swordsmen\n";
                  cout << "(3) Send go fight\n";
                  cin >> choiceD;
                  
       if (choiceD == 1)
                   {
                   int archers, choiceE; 
                   cout << "How many archers would you like to send?\n";
                   cin >> archers;
                   cout << archers << endl;
                   cout << "Would you like to...\n";
                   cout << "(1) Send Swordsmen\n";
                   cout << "(2) Go fight!\n";
                   cin >> choiceE;
                   }
       if (choiceD == 2)
                   {
                   int swords, choiceF;
                   cout << "How many swordsmen would you like to send?\n";
                   cin >> swords;
                   cout << swords << endl;
                   cout << "Would you like to...\n";
                   cout << "(1) Go fight!\n";
                   cin >> choiceF;
                   }
     //steven zarzecki
       if (choiceE == 1)
                   {
                   int swords, choiceC;
                   cout << "How many swordsmen would you like to send?\n";
                   cin >> swords;
                   cout << swords << endl;
                   cout << "Would you like to...\n";
                   cout << "(1) Go fight!\n";
                   cin >> choiceC;
                   }
                   }
                   
       if (choiceD == 3 , choiceA == 3, choiceB == 3, choiceC == 1, choiceF == 1, choiceG == 1, choiceE == 2, choice == 3, choice == 4);
                   {
                   cout << "Entering battle...\n";
                   cout << "It was a long battle.\n";
                   cout << 50-archers << " archers died\n";
                   cout << 25-catapults << " catapults died\n";
                   cout << 100-swordsmen << " swordsmen died\n";
                   cout << "You lost to Germania try againnext time!\n";
                   }
                   }
                   
//steven zarzecki                   
                   
                   
        
                  
      
    system("PAUSE");
    return 0;
}
