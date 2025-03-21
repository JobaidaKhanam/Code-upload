#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    for(int i = 1; i <= T; i++)
    {
        string S;
        cin >> S;
        int x1, x2, c = 0;
        cin >> x1 >> x2;

        for(int j = x1 - 1; j <= x2 - 1; j++)
        {
            char ch = S[j];
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
               ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            {
                c++;
            }
        }

        cout << "Case " << i << ": " << c << endl;
    }

}

