#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int main() {
    int a, b;
    char op;
    cin >> a >> op >> b;

    if (op == '+') {
        cout << add(a, b) << endl;
    } else if (op == '-') {
        cout << subtract(a, b) << endl;
    } else {
        cout << "Invalid operator" << endl;
    }

    return 0;
}
