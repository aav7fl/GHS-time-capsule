#include <cstdlib>
#include <iostream>

using namespace std;
const int N=10;
int main()
{
    int t[10],i,z=0;
    for(i=0;i<N;i++)
    {
                    cout << "Type an integer: ";
                    cin >> t[i];
                    z+= (t[i]>=10);
                    }
                    cout << "the number of integers greater or equal to 10 is: " << z <<endl;
    system("PAUSE");
    return 0;
}
