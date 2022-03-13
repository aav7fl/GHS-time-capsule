//Steven Zarzecki
#include <iostream>

using namespace std;
void menu();
void ask();
int math();

int main()
{
   menu();
    ask();
    math();
    system("PAUSE");
    return 0;
}
void menu()
{
     int num1, num2;
     cout << "Welcome to Jablanian Calculator\n\n";
     cout << "Please enter two numbers of your own choosing\n\n";
     cin >> num1;
     cin >> num2;
     cout << "Ok you picked " << num1 << " and " << num2 << " as your numbers\n\n";
}
void ask()
{ 
     int choice;
     cout << "Would you like to...\n";
     cout << "1) Add\n";
     cout << "2) Subtract\n";
     cout << "3) Multiply\n";
     cout << "4) Divide\n";
     cout << "Please enter your choice!\n";
     cin >> choice;
}
int math()
{
    int choice;
    int answer;
    int num1; 
    int num2;
    if (choice == 1)
    {
               cout << "You chose to add" << endl;
              answer == (num1 +num2);
              cout << "Your answer is... " << answer << endl;
              return answer;
              }
    if (choice == 2)
    {
               cout << "You chose to subtract" << endl;
               answer == (num1 -num2);
               cout << "Your answer is... " << answer << endl;
               return answer;
               }
     if (choice == 3)
     {
                 cout << "You chose to multiply" << endl;
                answer == (num1 *num2);
                cout << "Your answer is... " << answer << endl;
                return answer;
                }
     if (choice == 4)
     {
                 cout << "You chose to divide" << endl;
                answer == (num1 %num2);
                cout << "Your answer is... " << answer << endl;
                return answer;
                }
                }
