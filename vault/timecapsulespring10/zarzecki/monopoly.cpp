//Steven Zarzecki
#include <ctime>
#include <iostream>
#include <string>
using namespace std;



int main()
{
    string choice,choice2;
    cout << "\t\tWelcome To Monopoly\n\n" << endl;
    cout << "\t\tWell...roll the dice already!\n\n" << endl;
    int number;
    int money = 1500;
    srand(time(0));
    number = rand() %11 + 2;
    cout << "You rolled a..." << number << endl;
    
    cout << "Looks like you landed in jail...BWAHAHAHAHAHAHAHAHAHA!!!!!\n\n" << endl;
               cout << "               |             |          " << endl;
               cout << "               |             |          "<< endl;
               cout << "                                        "<< endl;
               cout << "              * * * * * * * * *                  "<< endl;
               cout << "          *                       *              "<< endl;
                
    cout << "Would you like to roll again?" << endl;
    cin >> choice;
    if (choice == "yes")
    {
               cout << "Roll again already!!!" << endl;
               int number2;
               
                srand(time(0));
                number2 = rand() %11 + 2;
                cout << "You rolled a..." << number2 << endl;
                
                cout << "Looks like you landed on B&O Railroad" << endl;
                cout << "--------------------------------------" << endl;
                cout << "   |     |     |     |     |     |    " << endl;
                cout << "   |     |     |     |     |     |    " << endl;
                cout << "--------------------------------------" << endl;
                cout << "Would you like to purchase it?" << endl;
                cout << "Of course you do, that will be $100"<< endl;
                money = 1500 - 100;
                cout << "You now have $"<< money<< " left to spend."<< endl;
                }
    cout << "Would you like to roll again?\n\n";
    cin >> choice2;
    if (choice2 == "yes");
    {
                 int number3;
               
                srand(time(0));
                number3 = rand() %11 + 2;
                cout << "You rolled a..." << number3 << endl;
                cout << "You landed on community chest\n\n";
                cout << "###################################"<< endl;
                cout << "#                                 #"<< endl;
                cout << "#    Bank Failure collect $200    #"<<endl;
                cout << "#                                 #"<<endl;
                cout << "###################################"<<endl;
                money = 1400 + 200;
                cout << "\nYou now have $"<< money << endl;
                cout << "Thanks for playing\n\n";
                }
   if (choice,choice2 == "no")
   {
              cout << "Thanks for playing :)" << endl;
              
    
    

}
     
    system("PAUSE");
    return 0;
}
