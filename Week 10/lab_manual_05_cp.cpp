#include <iostream>
#include <cmath>
using namespace std;
main()
{
    float a, b, c;
    int determinant;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    cout << "Enter the value of c: ";
    cin >> c;
    determinant = pow(b, 2) - (4 * a * c);
    float root1, root2;
    // To evaluate ax2+bx+c
    if (determinant > 0)
    {
        root1 = (-b + sqrt(determinant)) / (2 * a);
        root2 = (-b - sqrt(determinant)) / (2 * a);
        cout << "Solution x = " << root1 << " and x = " << root2;
    }
    else if (determinant == 0)
    {
        root1 = root2 = -b / 2 * a;
        cout << "Solution x = " << root1;
    }
    else if (determinant < 0)
    {
        float root1a, root2a;
        float root1b, root2b;
        root1a = -b / 2 * a;
        root1b = sqrt(-determinant) / 2 * a;
        cout << "Complex Solution: x = " << root1a << " + " << root1b << "i and " << "x = " << root1a << " - " << root1b << "i";
    }
}