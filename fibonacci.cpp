#include <iostream>
using namespace std;

bool verificaSePertence(int num, int* fib, int tam) {
    for(int i = 0; i < tam; i++) {
        if(num == fib[i]) {
            return true;
        }
    }
    return false;
}

int main() {
    int num, i = 2, tam = 2;
    int fib[1000] = {0, 1};
    cout << "Digite um numero para verificar se pertence a sequencia de Fibonacci: ";
    cin >> num;

    while(fib[i-1] <= num) {
        fib[i] = fib[i-1] + fib[i-2];
        cout << fib[i] << endl;
        i++;
        tam++;
    }

    cout << endl;

    if(verificaSePertence(num, fib, tam)) {
        cout << num << " pertence a sequencia de Fibonacci." << endl;
    } else {
        cout << num << " nao pertence a sequancia de Fibonacci." << endl;
    }
    return 0;
}
