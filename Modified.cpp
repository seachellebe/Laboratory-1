#include <iostream>
using namespace std;
int main()
{
    int myFavoriteNumbers[5] = {1, 27, 18, 2, 7};
    int index =  myFavoriteNumbers[5];

    if (index > 0 && index < 5) {
        cout << "My most favorite number is " << index << endl;
    } else {
        cout << "Index out of bounds!" << endl;
    }
    
    return 0;
}

// This code was been modified to avoid out-of-bounds access.
