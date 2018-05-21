#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, x, counter = 0;
    int array [2001];


    fill(array, array + 2001, 0);
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        array[x] =array[x]+ 1;
        cout<<array[x]<<endl <<"i="<< i<<endl;
    }

    for (int j = 0; j < 2001; j++)
    {
        if(array[j] != 0)
        {
            cout << j << " aparece " << array[j] << " vez(es)" << endl;
        }
    }
    return 0;
}
