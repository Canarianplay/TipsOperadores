// Tips con operadores

#include <iostream>

using namespace std;

int main()
{
    /*Los tips de operadores de incremente y decremento se comportan de la misma manera para tipos int, float, double*/
    //p.ej: un contador
    int a = 1;
    a++; //esto es lo mismo que a = a + 1;
    cout << "El valor de a es: " << a << endl;

    //p.ej: un cuenta atras
    int b = 5; // esto es lo mismo que b = b - 1
    b--;
    cout << "El valor de b es: " << b << endl;

    //¿Que pasaria si fueran decimales?
    float c = 1.12354;
    c++; 
    cout << "El valor de c es: " << c << endl;

    /*--------------------------------------------------------------------------------------*/

    /*Tips con operadores de asignación*/
    /*suma y asignacion*/
    int d = 2;
    int e = 3;
    d += e; //  esto es lo mismo que d = d + e;
    int d1 = 2;
    int e1 = 3;
    d1 -= e1;
    int d2 = 2;
    int e2 = 3;
    d2 *= e2;
    int d3 = 2;
    int e3 = 3;
    d3 /= e3;
    int d4 = 2;
    int e4 = 3;
    d4 %= e4;

    cout << "El valor de d es: " << d << endl;
    cout << "El valor de d1 es: " << d1 << endl;
    cout << "El valor de d2 es: " << d2 << endl;
    cout << "El valor de d3 es: " << d3 << endl;
    cout << "El valor de d4 es: " << d4 << endl;

    /*--------------------------------------------------------------------------------------*/

    /*Tips con condicionales y operador ternario*/
    int f = 10;
    int g = 20;

    ((f < g) && (g > f)) ? cout << "El valor de f: " << f << endl : cout << "El valor de g: " << g << endl;
    //esto es lo mismo que
      /*if ((f > g))
    {
        cout << "El valor de f: " << f << endl;
    }
    else
    {
        cout << "El valor de g: " << g << endl;
    }*/

}

