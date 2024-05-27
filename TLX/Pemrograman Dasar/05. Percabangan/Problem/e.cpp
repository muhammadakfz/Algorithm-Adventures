#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    if(N < 10) cout << "satuan";
    else if(N < 100) cout << "puluhan";
    else if(N < 1000) cout << "ratusan";
    else if(N < 10000) cout << "ribuan";
    else cout << "puluhribuan";

    cin.get();
    return 0;
}
