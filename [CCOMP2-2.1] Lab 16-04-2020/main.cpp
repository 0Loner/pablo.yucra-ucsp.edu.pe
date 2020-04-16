// ejercicios_condicional.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
using namespace std;


//ejercicio 1


int main()
{
    cout << "\a";
    int a, b, sum, rest, mult, div, res;
    cout << "\t\t\t\t<<<----Buen dia---->>>>\n";
    cout << "Ingresa dos numeros para brindarte los soluciones a las operaciones matematicas\n";
    cout << "Ingresa el primer numero : ";
    cin >> a;
    cout << "Ingresa el segundo numero : ";
    cin >> b;
    sum = a + b;
    cout << "La suma de los dos numeros ingresados es : " << sum << "\n";
    rest = a - b;
    cout << "La resta del primero menos el segundo es : " << rest << "\n";
    rest = b - a;
    cout << "La resta del segundo menos el primero es : " << rest << "\n";
    mult = a * b;
    cout << "El producto de ambos numeros es : " << mult << "\n";
    if (b == 0)
    {
        cout << "la division entre 0 es indeterminada" << endl;
    }
    else
    {
        div = a / b;
        cout << "La division del primero entre el segundo es : " << div << "\n";
    }
    if (a == 0)
    {
        cout << "la division entre 0 es indeterminada" << endl;
    }
    else
    {
        div = b / a;
        cout << "La division del segundo entre el primero es : " << div << "\n";
    }
    if (b == 0)
    {
        cout << "la division entre 0 es indeterminada por lo tanto no se puede hallar el residuo" << endl;
    }
    else {
        res = a % b;
        cout << "El residuo de a/b es : " << res << "\n";
    }
    if (a == 0)
    {
        cout << "la division entre 0 es indeterminada por lo tanto no se puede hallar el residuo" << endl;
    }
    else
    {
        res = b % a;
        cout << "El residuo de b/a es : " << res << "\n";
    }
    if (a > b)
    {
        cout << a << " es mayor que : " << b << endl;
        cout << b << " es menor que : " << a << endl;
    }
    else if (b > a)
    {
        cout << b << " es mayor que : " << a << endl;
        cout << a << " es menor que : " << b << endl;
    }
    else
    {
        cout << "Ambos numeros son iguales";
    }
    //si un numero puede dividirse por otro
    if (b == 0)
    {
        cout << "El primero no es divisible por el segundo, ya que el segundo es 0  " << endl;
    }
    else if (a % b == 0)
    {
        cout << a << " es divisibles por :" << b << endl;
    }
    if (a == 0)
    {
        cout << "El segundo no puede ser divisible por el primero ya que el primero es 0" << endl;
    }
    else if (b % a == 0)
    {
        cout << b << " es divisible por : " << a << endl;
    }
    else
    {
        cout << "Ningun numero es divisor del otro";
    }
    return 0;
}



//ejercicio 2 

/*
int main()
{
    cout << "\t\t\t\t<<<----Buen dia---->>>>\n";
    cout << "El siguiente programa te ayudara a obtener la suma, resta, multiplicacion,division,residuo y raiz cuadrada \n";
    cout << "Ingresa el operador a efectuar deacuerdo a eso te pediremos la cantidad de operandos : \n";
    char m;
    int primernumero, segundonumero, suma, resta, multiplicacion, division, unico_numero;
    float raiz_cuadrada, residuo;
    cin >> m;
    if (m == '+')
    {
        cout << " elegiste la suma: " << endl;
        cout << " Ingresa el primer numero : "; cin>> primernumero;
        cout << "Ingresa el segundo numero : "; cin >> segundonumero;
        suma = primernumero + segundonumero;
        cout << "La suma de ambos numeros es : " << suma << endl;
    }
    else if (m == '-')
    {
        cout << " elegiste la resta : " << endl;
        cout << " Ingresa el primer numero : "; cin >> primernumero;
        cout << "Ingresa el segundo numero : "; cin >> segundonumero;
        resta = primernumero - segundonumero;
        cout << "La resta del primero menos el segundo es : " << resta << endl;
        resta = segundonumero - primernumero;
        cout << "La resta del segundo menos el primero es : " << resta << endl;
    }
    else if (m == '*')
    {
        cout << " elegiste la multiplicacion: " << endl;
        cout << " Ingresa el primer numero : "; cin >> primernumero;
        cout << "Ingresa el segundo numero : "; cin >> segundonumero;
        multiplicacion = primernumero * segundonumero;
        cout << "El producto de ambos numeros es : " << multiplicacion << endl;
    }
        else if (m == '/')
        {
            cout << " elegiste la division: " << endl;
            cout << " Ingresa el primer numero : "; cin >> primernumero;
            cout << "Ingresa el segundo numero : "; cin >> segundonumero;
            if (segundonumero == 0)
            {
                cout << "la division entre 0 es indeterminada" << endl;
            }
            else
            {
                division = primernumero / segundonumero;
                cout << "La division del primero entre el segundo es : " << division << "\n";
            }
            if (primernumero == 0)
            {
                cout << "la division entre 0 es indeterminada" << endl;
            }
            else
            {
                division = segundonumero / primernumero;
                cout << "La division del segundo entre el primero es : " << division << "\n";
            }
        }
        else if (m == '%')
        {
            cout << "elegiste el residuo: " << endl;
            cout << " Ingresa el primer numero : "; cin >> primernumero;
            cout << "Ingresa el segundo numero : "; cin >> segundonumero;
            if (segundonumero == 0)
            {
                cout << "la division entre 0 es indeterminada por lo tanto no se puede hallar el residuo" << endl;
            }
            else {
                residuo = primernumero % segundonumero;
                cout << "El residuo entero de a/b es : " << residuo << "\n";
            }
            if  (primernumero == 0)
            {
                cout << "la division entre 0 es indeterminada por lo tanto no se puede hallar el residuo" << endl;
            }
            else
            {
                residuo = segundonumero % primernumero;
                cout << "El residuo entero de b/a es : " << residuo << "\n";
            }
        }
        else if (m == '~')
    {
        cout << " elegiste la raiz cuadrada : " << endl;
        cout << " Ingresa el unico numero : "; cin >> unico_numero;
        raiz_cuadrada = sqrt(unico_numero);
        cout << "La raiz cuadrada del numero es : " << raiz_cuadrada << endl;
    }
    return 0;

}

*/



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
