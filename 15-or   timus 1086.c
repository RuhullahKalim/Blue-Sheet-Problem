#include <iostream>
using namespace std;
#define len 100000

int main()
{
    int arr[len] = {0},c,a,s;
    cin >> a;
    while(a--)
    {

        cin >> s;
        s=s+1;
        c=0;
        for (int i = 2; i < len; i++)
        {
            for (int j = i * i; j < len; j+=i)
            {
                arr[j - 1] = 1;
            }
        }
        for (int i = 1; i < len; i++)
        {
            if (arr[i - 1] == 0)
            {
                c++;
                if(s==c)
                {
                    cout << i << "\n";
                    break;
                }

            }

        }
    }


    return 0;
}

