#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main()
{
    for(int i = 1; i <= 5; i++) {
        for(int j = 0; j < i; j++) {
            cout << i;
        }
        cout << endl;
    }
    return 0;
}