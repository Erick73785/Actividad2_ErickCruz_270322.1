#include <iostream>
#include <algorithm>
using namespace std;
const int N = 10;
int main()
{
    int datos[N] = {20, 3, 49, 25, 29, 34, 6, 21, 15, 2};
    sort(datos, datos + N);

    cout << "Datos ordenados: ";

    for (int i = 0; i != N; ++i)
        cout << datos[i] << " ";

    return 0;
}
