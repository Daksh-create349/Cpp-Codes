#include <iostream>
using namespace std;

int main()
{
    for (int x = 1; x <= 5; x++)
    {
        // spaces
        for (int s = 1; s <= 5 - x; s++)
        {
            cout << " ";
        }

        // numbers
        for (int z = 1; z <= x; z++)
        {
            cout << x << " ";
        }

        cout << endl;
    }
    return 0;
}