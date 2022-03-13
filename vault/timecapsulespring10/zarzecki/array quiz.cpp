//The "Z" Man aka Steven Zarzecki
#include <iomanip>
#include <iostream>

using namespace std;


int main()
{
    int m[10],o;
    string movie;
    for (o=0;o<5;o++)
    {
       
        cout << "Type in a Movie: ";
        cin >> movie;
        }
    int a[10], c;
    string acter;
    for (c=0;c<5;c++)
    {
        cout << "Type in the Acter or Actress associated with each of your movies: ";
        cin >> acter;
        }
    int f[10],y,r;
    for (y=0;y<5;y++)
    {
        cout << "Please enter the years of each movie: ";
        cin >> r;
        }
    cout << "Here are your movies, their acters/actresses, and years";
    int output;
    cout << setw(9)<< "\nMovie" << setw(9) << "Acter/Actress" << setw(6) << "Year" << endl;
    
    for (output=1;output<6;output++)
    cout << setw(9) << output << setw(9) << m[output] << setw(6) << a[output] << setw(5) << f[output] << "\n";
    
    system("PAUSE");
    return 0;
}
