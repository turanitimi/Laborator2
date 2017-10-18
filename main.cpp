#include <iostream>

using namespace std;

int main()
{
    int v, h;
    double g;
    cout << "Inaltimea (cm): ";
    cin >> h;
    cout << "Varsta (ani): ";
    cin >> v;
    g = 50 + 0.75*(h - 150) + 0.25 * (v - 20);
    cout << "Greutatea ideala (barbat): " << g << "kg" << endl;
    cout << "Greutatea ideala (femeie): " << 0.9 * g << "kg" << endl;
    return 0;
}
