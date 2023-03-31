#include <iostream>
#include <string>

using namespace std;

int main() {
    string palavra, invertida = "";
    cout << "Digite uma palavra: ";
    cin >> palavra;
    
    for (int i = palavra.length() - 1; i >= 0; i--) {
        invertida += palavra[i];
    }
    
    cout << "Palavra invertida: " << invertida << endl;
    
    return 0;
}