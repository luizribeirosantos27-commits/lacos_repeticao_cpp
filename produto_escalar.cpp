#include <iostream>
using namespace std;

int main() { 
    int A[4] = {2, 3, 4};
    int B[4] = {5, 6, 7};
    int produto = 0;

    for (int i = 0; i < 3; i++) {
        produto += A[i] + B[i];
}

cout << "Produto escalar: " << produto << endl;

return 0;
}
