//Steven Zarzecki
#include <cstdlib>
#include <iostream>
    
using namespace std;

int main()
{
    
    char a;
   
 
    
    cout << "\n\t\t//////////Welcome to the world of Jables//////////";
    cout << "\n\t\t/////////Would you like to go on an adventure (y/n) ?////\n";
    cin >> a;
    if (a == 'y')
{
    cout << "You have made a brave decision young Jablan." << endl;
    cout << "\nWelcome to the land of Jables.";
    cout << "\nOur beautiful land is currently plauged by poisonis FUGU fish!";
}
    else
        cout << "You are not welcome in the land of Jables." << endl;
    
    
    char b;
    cout << "\nWill you help to fight against the FUGU or run away with \nyour tail betwingxt your legs (y/n)?";
    cin >> b;
    if (b == 'y')
{
    cout << "\nYou have fought bravely against the FUGU and have indeed succeeded.\n";
    cout << "\nThank you brave Jablan you have been promoted to Sergent Wookie\n";
    
}
    else
         cout << "Get out of here!" << endl;
    char c;     
    cout << "\nBrave Sergent Wookie Jablan our lands are yet again plauged\n now by the flaming platepi.";
    cout << "\nWill you help us against the flaming platepi and save our land yet again?";
    cin >> c;
    if (c == 'y')
    cout << "\nThank-You King Jablanian will be most pleased!!!!\n";
    else
    cout << "\nGet out of Here!!!\n";
    
    
    int deaths = rand () %500 +1;
    cout << "\n You accumilated" << deaths << " deaths during your adventure!\n";
    
    cout << "\nThank you for playing\n";
         
    
    
    

               
    
    system("PAUSE");
    return 0;
}
