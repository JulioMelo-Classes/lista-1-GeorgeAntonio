#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

/*
ok
*/
int main(void)
{
    // TODO: Adicione aqui seu código.
    int num, neg=0;
    for (int i = 0; i < SIZE; i++) {
        std::cin >> num;
        if (num < 0) {
            neg++;
        }
    }
    std::cout << neg;

    return 0;
}
