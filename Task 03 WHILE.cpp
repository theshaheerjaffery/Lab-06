#include <iostream>
using namespace std;
int main() {

    int i=1;
    while(i<=7)
    {
        int j=1;
        while(j<=i)
        {
            cout<<i;
            j++;
        }
        i++;
        cout<<endl;
    }

    return 0;
}