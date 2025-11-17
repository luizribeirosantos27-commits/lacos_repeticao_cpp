include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Digite um numero para ver sua tabuada: ";
    cin >> n;

    cout << "Tabuada do " << n << ":";

    for(int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }

    return 0;
}
