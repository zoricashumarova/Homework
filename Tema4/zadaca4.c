#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    float rezultat = 0;

    for (int i=0; i<n; i++) {
        rezultat += 1.0 / pow(2,(i+1));
    }

    cout << rezultat << endl;
    return 0;
}
