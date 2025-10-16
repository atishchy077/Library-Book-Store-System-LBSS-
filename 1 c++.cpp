#include <iostream>
using namespace std;

int main ()
{
    int i, n, current, last, previous;
    cout<<"Enter number till where you want fibbonacci: ";
    cin>>n;
    for (i=1; i<=n; i++) {
        current = last + previous;
        last = previous;
        previous = current;
        }
        cout<<current;
        }
        /*
        Enter number till where you want fibbonacci: 5
        o/p = 8
*/
