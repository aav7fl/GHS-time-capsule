#include <iomanip>
#include <iostream>

using namespace std;
const int D = 10;

int main()
{
    int d[10],t,b=20;
    char a[10];
    
    for (t=0;t<10;t++) 
    {
    cout << "Type in your name";
    cin >> a[t];
    }
    
     for (t=0;t<10;t++) 
    {
    cout << "Type in your kills ";
    cin >> d[t];
    }

        

      
        cout << "Here are your kills for each game";
        int game;
      
        cout << "\nGame #" << setw(9) << "Kills"<< "\n";
        for (game=1; game<10; game++)
        cout << setw(9) << game << setw (9) << d[game] << setw(11) << game[a] << "\n";
       
        
    system("PAUSE");
    return 0;
}
