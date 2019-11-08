#include <iostream>
#include "lib.h"

int main() {
    using namespace std;
    unsigned int n;
    cout << "Введите количество чисел, которых нужно ввести: " << endl;
    cin >> n;
    int *m;
    m = new int[n];
    cout << "Введите " << n << " чисел, которых нужно ввести: " << endl;
    for (unsigned int i = 0; i < n; i++){
        cout << (i + 1) << ": ";
        cin >> m[i];
    }
    for (unsigned int i = 0; i < n; i++){
        cout << (i + 1) << ": " << m[i] << endl;
    }
    cout << "Сумма чисел: " << array_sum(n, m) << endl;
    return 0;
}