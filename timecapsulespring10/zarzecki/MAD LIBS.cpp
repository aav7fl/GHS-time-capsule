//Steven Zarzecki
#include <string>
#include <iostream>

using namespace std;
string askText(string prompt);
int askNumber(string prompt);
void tellStory(string name, string jiberish, int number, string spanish, string goat);

int main()

{
    cout << "Welcome to Mad Lib.\n\n";
    cout << "Answer the following questions to help create a new story.\n";
    string name = askText("Please enter a name: ");
    string jiberish = askText("Please enter some jiberish: ");
    int number = askNumber("Please enter a number: ");
    string spanish  = askText("Please enter a spanish word: ");
    string goat = askText("Please enter a type of goat: ");
    
    tellStory(name, jiberish, number, spanish, goat);
    
    
    return 0;
}

string askText(string prompt)
{
       string text;
       cout << prompt;
       cin >> text;
       return text;
       }
int askNumber(string prompt)
{
    int num;
    cout << prompt;
    cin >> num;
    return num;
}

void tellStory(string name, string jiberish, int number, string spanish, string goat)
{
     cout << "\n Here's your story:\n";
     cout << "The famous scientist ";
     cout << name;
     cout << " had nearly given up a life-long quest to find\n";
     cout << "The physics behind ";
     cout << jiberish;
     cout << " when one day, the ";
     cout << spanish;
     cout << " found the physicist.\n";
     cout << "Covered in ";
     cout << number;
     cout << " " << spanish;
     cout << ", a tear came to ";
     cout << name << "'s ";
     cout << goat << " goat.\n";
     cout << "After all this time, the quest was finally over. ";
     cout << "And then, the ";
     cout << spanish << "\n";
     cout << "promptly devoured ";
     cout << name << ". ";
     cout << "The moral of the story? Be careful what you ";
     cout << goat;
     cout << " for. ";
     system ("pause");
     }
