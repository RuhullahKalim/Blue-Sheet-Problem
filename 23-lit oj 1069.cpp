#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int T,t,me,li;
    cin>>T;
    t=1;
    while(T--)
    {
        cin>>me>>li;
        if(me<=li)
        {
            cout<<"Case "<<t<<": "<<li*4+19<<endl;
        }
        else
        {
            cout<<"Case "<<t<<": "<<(2*me-li)*4+19<<endl;
        }

        t++;
    }
    return 0;

}
