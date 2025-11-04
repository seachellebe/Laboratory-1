#include <iostream>
using namespace std;
int main()
{
    int myFavoriteNumbers[5] = {1, 27, 18, 2, 7};
    int index = myFavoriteNumbers[5];

    cout << "My most favorite number is " << index << endl;

    return 0;
}

// This code has an out-of-bounds array access.