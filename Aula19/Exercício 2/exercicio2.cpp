#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    int *p = &num;

    cout << "Valor inicial " << *p << endl;
    p += 40;
    cout << "Valor depois da adicao ao ponteiro " << *p << endl;
    return 0;
}
