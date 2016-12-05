#include <iostream>

using namespace std;

void dig_trench ( int l, int Trench[6][6] )
{
    bool z;
    int n;
    for (int i = 0; i < l; i++)
    {
        n = i;
        z = false;

        for (int j = 0; j < l; j++)
        {
            if (n == 0)
                z = true;

            Trench[i][j] = n;

            if (z)
                n++;
            else
                n--;

        }
    }
}

int main()
{
    int l = 6;
    int Trench[6][6];

    dig_trench (l, Trench);

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < l; j++)
        {
            cout << Trench[i][j] << " ";
        }
        cout << endl;
    }
}
