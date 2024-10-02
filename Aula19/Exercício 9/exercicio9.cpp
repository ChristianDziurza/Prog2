#include <iostream>
using namespace std;

int main(){
    int v[3] = {1,2,3};
    int *p;
    p = &v[0];
    
    for(int i=0;i<3;i++){
        cout << *(p+i) << endl;
    }
    return 0;
}