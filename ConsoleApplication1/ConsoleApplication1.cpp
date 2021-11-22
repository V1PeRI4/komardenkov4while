

#include <iostream>
#include <math.h>
using namespace std;


int main() {

    while (true) {
        float n, f=1;
        cin >> n;
        if (n < 0)
            break;
        for (int i = 1; i <= n; i++)
            f = f * i;
        cout << f << endl;
    }
    return 0;
}
