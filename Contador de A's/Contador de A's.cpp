#include <iostream>
#include <string>
using namespace std;
int main() {
    string input;
    int contador = 0;
    cout << "Digite uma string: ";
    getline(cin, input);
    for (char c : input) {
        if (c == 'a' || c == 'A') {
            contador++;
        }
    }
    if (contador > 0) {
        cout << "A letra 'a' ocorre " << contador << " vezes na string." <<endl;
    }
    else {
        cout << "A letra 'a' não foi encontrada na string." <<endl;
    }
    return 0;
}