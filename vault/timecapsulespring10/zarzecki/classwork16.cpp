
#include <iostream>

using namespace std;
int dogyears(int);

int main()
{
    int years;
    cout << "Enter your dogs age:" <<endl;
    cin>>years;
    int peopleyears = dogyears(years);
    cout << "Your dog is " <<peopleyears<< "\n\n";
    system("PAUSE");
    return 0;
}
int dogyears (int dog)
{
    using namespace std;
    return 7 * dog;

}
