#include <iostream>
using namespace std;

int main() {
    int num ;
    int n=1;
    int even = 0;
    int odd = 0;

    while (n != 0) {
        cout << "Enter an integer: ";
        cin >> num;

        if (num == 0) {
              break;
        }
        if (num % 2 == 0) {
            even++;
        } 
        else {
            odd++;
        }
      
    }

    cout << "#Even numbers = " << even << endl;
    cout << "#Odd numbers = " << odd << endl;

    return 0;
}
