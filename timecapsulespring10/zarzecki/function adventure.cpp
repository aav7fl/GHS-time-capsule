#include <string>
#include <iostream>

using namespace std;
bool intro(void);
void room (bool enemy, bool treasure, string description);
string name = "";
string enemyName = "";
string treasureName = "";
const string room1 = "You enter the mouth of the caves.";
const string room2 = "You adventure deeper into the caves.";
const string room3 = "You have reached the depths of the caves.";

int main()
{
    if (intro())
    return 0;
    treasureName = "Gold sword";
    enemyName = "goblin";
    room(true, true, room1);
    enemyName = "wombat";
    room(true, false, room2);
    enemyName = "hobgoblin lord.";
    treasureName = "treasure horde.";
    room(true, true, room3);
    system("PAUSE");
    return 0;
}
bool intro(void)
{
     using namespace std;
     cout << "Brave knight!! What is your name?\n";
     cin >> name;
     cout << "We are in need of your help. " << name 
     << ". Our village is being overrun \n"
     << "by the goblins of the Northern Caves. "
     << " We need you to defeat them!\n"
     << "Will you accept the challenge?\n\n";
     cout << "1) Yes. \n"
     << "2) No. \n\n";
     int response;
     cin >> response;
     system ("pause");
     return !(response == 1);
     }
     
     void room(bool enemy, bool treasure, string description)
     {
          using namespace std;
          while(true)
          {
                     cout << description.c_str()<<"\n\n";
                     int response = 0;
                     do 
                     {
                         cout << " What would you like to do?\n";
                         if (enemy)
                         cout << "1)Attack the evil "
                         << enemyName.c_str()<<"\n";
                         else if (!enemy)
                         cout << "1) Move to the next room.";
                         if (treasure)
                         cout << "2) Pick up the "
                         <<treasureName.c_str()<<"\n";
                         cin >> response;
                         }while(response <1 || response >2);
                         
                         switch(response)
                         {
                                         case 1:
                                              if (enemy)
                                              {
                                                        enemy = !enemy;
                                                        cout << "You slay the deadly"
                                                        << enemyName.c_str()<< "\n";
                                                        }
                                                        else if (!enemy)
                                                        return;
                                                        break;
                                                        case 2:
                                                             treasure=!treasure;
                                                             cout << "You pick up the "
                                                             << treasureName.c_str()<< "\n";
                                                             break;
                                                             }
                                                             }
                                                             }
