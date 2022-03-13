//Steven Zarzecki
#include <iomanip>
#include <iostream>

using namespace std;
int i;
int N = 5;
string moviearray[5];
int yeararray[5];
int element;
string actorarray[5];

int main()

{
    for(i=0;i<N;i++)
    {
                    cout << "\t\tEnter a Movie Name: \n\n";
                    cin >> moviearray[i];
                    }
    for(i=0;i<N;i++)
    {
                    cout << "Enter the main actor/actress name: ";
                    cin >> actorarray[i];
                    }
    for(i=0;i<N;i++)
    {
                    cout << "What year did the film come out?: ";
                    cin >> yeararray[i];
                    }
    cout << "\n\n" << "Year" << setw(17) << "Film" << setw(33) << "Actor/Actress\n\n";
    for (element = 0;element<2;element++)
    cout << setw(4) << yeararray[element] << setw(18) << moviearray[element] << setw(33) << actorarray[element] << "\n\n";
    
    system("PAUSE");
    return 0;
}
