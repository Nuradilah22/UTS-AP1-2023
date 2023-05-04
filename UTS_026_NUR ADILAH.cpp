#include <iostream>

using namespace std;

int main(){
    int count, x, i;

    cout << "input : ";
    cin >> count;
    cout << "Output" << endl;

    for (i = 1; i < count; i++){
        for (x = count; x > i; x--){
            cout << " *";
        }
        for (x = 1; x < i; x++){
            cout << "    ";
        }
        for (x = count; x > i; x--){
            cout << " *";
        }
        if (i == count - 1){}
        else{
            cout << endl;
        }
    }

    for (i = 1; i <= count; i++){
        for (x = 1; x < i; x++){
            cout << " *";
        }
        for (x = count; x > i ; x--){
            cout << "    ";
        }
        for (x = 1; x < i; x++){
            cout << " *";
        }
        cout << endl;
    }
    return 0;
}