#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int m[t];
    for (int j = 0; j < t; ++j)
    {
        cin >> m[j];
    }

    for (int j = 0; j < t; ++j)
    {
        if (m[j] % 4 == 0)
        {

            cout << "YES" << endl;
            for (int i = 0; i < m[j] / 2; ++i)
            {
                cout << 2 * (i + 1) << " ";
            }
            for (int i = 0; i < m[j] / 2 - 1; ++i)
            {
                cout << 2 * i + 1 << " ";
            }
            cout << m[j] + m[j] / 2 - 1 << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}