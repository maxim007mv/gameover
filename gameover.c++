#include <iostream>
using namespace std;

int main() {
    long long a, h, k, m, s;
    cin >> a >> h >> k >> m >> s;

 
    long long numStrips = (a + m - 1) / m;

   
    long long stripsPerRoll = s / h;

  
    long long rollsRequired = (numStrips + stripsPerRoll - 1) / stripsPerRoll;

    cout << rollsRequired << endl;

    return 0;
}
