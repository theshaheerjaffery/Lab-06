#include <iostream>
using namespace std;
int main() {

    int i=1;
    while(i<=5)
    {
        cout<<"Row "<<i<<": "<<endl<<"\t";
        int j=1;
        while(j<=10)
        {
            cout<<"Seat "<<j<<" ; ";
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}