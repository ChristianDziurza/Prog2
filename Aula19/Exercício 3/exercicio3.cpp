#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    int *p = &num;

    cout << "Valor inicial " << *p << endl;
    p -= 268;
    cout << "Valor depois da subtracao ao ponteiro " << *p << endl;
    return 0;
}
