/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>
#include "math.h"
using std::cout;
using std::cin;
using std::endl;

int main() {
    int n, m, cont = 0, som;
    std::cin >> n;
    std::cin >> m;
    som = n;
    while (cont < abs(m) - 1) {
        if (m > 0) {
            n++;
            som += n;
        }
        else if (m < 0) {
            n--;
            som += n;
        }
        else if (m == 0) {
            break;
        }
        cont++;
    }
    std::cout << som;
    return 0;
}
