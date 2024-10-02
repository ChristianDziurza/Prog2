#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    int *p = &num;

    cout << *p << endl;
    p--;
    cout << *p << endl;
    p++;
    p++;
    cout << *p << endl;
    return 0;
}
