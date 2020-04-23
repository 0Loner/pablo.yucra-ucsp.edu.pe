// ManuelLoayza6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h> 
using namespace std;

int main()
{ /*
    Triángulo rectángulo, implementar un programa que pida al usuario el valor de los tres lados y
    los dos ángulos notables de un triángulo rectángulo pero con las siguientes condiciones :
    El usuario puede o no ingresar todos los datos.
    Con los datos ingresados primero validar si es un triángulo rectángulo.Por ejemplo si el usuario
    solo ingresa un dato en ese caso no podremos estimar las propiedades del triángulo rectángulo,
    pero si el usuario ingresa 2 o más datos tenemos que validar si podemos calcular con esos datos
    todas las propiedades del triángulo rectángulo.
    */


    //Las propiedades que deseo que se analize y se presente en pantalla sobre el triángulo rectángulo son :
    float lado1, lado2, lado3, angulo_noventa, angulo1, angulo2;
    float angulo3 = 90;
    float perimetro, area;
    cout << "Este programa es LA MAGIA DE LOS TRIANGULOS RECTANGULOS, INGRESA ALMENOS DOS DATOS PARA DARTE LOS DEMAS DATOS DEL TRIANGULO RECTANGULO QUE DESEAS" << endl;
    cout << "----------------Ingresa los datos que tengas----------Caso no tengas la informacion, escribe  -1" << endl;
    //std::cout << "Hello World!\n";
    cout << "Ingresa el primer lado : " << endl;
    cin >> lado1;
    if (lado1 == -1)
    {
        lado1 = 0;
    }
    cout << "Ingresa el segundo lado : " << endl;
    cin >> lado2;
    if (lado2 == -1)
    {
        lado2 = 0;
    }
    cout << "Ingresa el tercer lado : " << endl;
    cin >> lado3;
    if (lado3 == -1)
    {
        lado3 = 0;
    }
    cout << "Ingresa el primer angulo : " << endl;
    cin >> angulo1;
    if (angulo1 == -1)
    {
        angulo1 = 0;
    }
    cout << "Ingresa el segundo angulo : " << endl;
    cin >> angulo2;
    if (angulo2 == -1)
    {
        angulo2 = 0;
    }
    //4 triangulos notables 30-60   37-53   45-45   16-74
    if (lado1 == sqrt(3) || lado1 == 1 || lado1 == 3 || lado1 == 4 || lado1 == 3 || lado1 == 7 || lado1 == 24)
    {
        cout << "A escala si existe un triangulo rectangulo con este lado" << endl;
    }
    //4 triangulos notables 30-60   37-53   45-45   16-74
    if (lado2 == sqrt(3) || lado2 == 1 || lado2 == 3 || lado2 == 4 || lado2 == 3 || lado2 == 7 || lado2 == 24)
        //4 triangulos notables 30-60   37-53   45-45   16-74


    //4 triangulos notables 30-60   37-53   45-45   16-74  (HIPOTENUSAS)
        if (lado3 == 2 || lado3 == 5 || lado3 == 2 || lado3 == 25)
        {
            cout << "A escala si existe un triangulo rectangulo con este lado" << endl;
        }
    /*
    if ((lado1 == sqrt(3) && lado2 == 1 && lado3 = 2)|| (lado2 == sqrt(3) && lado1 == 1 && lado3 = 2))
    {
        cout << "El triangulo rectangulo es el de 60-30"<<endl;
    }
    */

    //primer triangulo rectangulo 37-53
    if (lado1 == 3 && lado2 == 4)
    {
        lado3 = 5;
        cout << "El triangulo rectangulo es el de 37-53" << endl;
    }
    if (lado1 == 4 && lado2 == 3)
    {
        lado3 = 5;
        cout << "El triangulo rectangulo es el de 37-53" << endl;
    }
    //segundo triangulo rectangulo 45-45
    if (lado1 == 1 && lado2 == 1)
    {
        lado3 = sqrt(2);
        cout << "El triangulo rectangulo es el de 45-45" << endl;
    }

    //tercer triangulo rectangulo 30-60
    if (lado1 == 1 && lado2 == sqrt(3))
    {
        lado3 = 2;
        cout << "El tringulo rectangulo es el de 60-30" << endl;
    }
    if (lado1 == sqrt(3) && lado2 == 1)
    {
        lado3 = 2;
        cout << "El triangulo rectangulo es el de 60-30" << endl;
    }

    //cuarto triangulo rectangulo 16-74
    if (lado1 == 7 && lado2 == 24)
    {
        lado3 = 25;
        cout << "El triangulo rectangulo es el de 74-16" << endl;
    }
    if (lado1 == 24 && lado2 == 7)
    {
        lado3 = 25;
        cout << "El triangulo rectangulo es el de 74-16" << endl;
    }
    //Trabajando con los angulos para los triangulos ejemplos 45-45    53-37    30-60   74-16   
    if (angulo1 == 45 || angulo1 == 53 || angulo1 == 37 || angulo1 == 30 || angulo1 == 60 || angulo1 == 74 || angulo1 == 16)
    {
        cout << "Existe el triangulo rectangulo a escala con esa informacion" << endl;
    }
    if (angulo2 == 45 || angulo2 == 53 || angulo2 == 37 || angulo2 == 30 || angulo2 == 60 || angulo2 == 74 || angulo2 == 16)
    {
        cout << "Existe el triangulo rectangulo a escala con esa informacion-" << endl;
    }

    //formula pitagorica
    if (pow(lado3, 2) == pow(lado1, 2) + pow(lado2, 2))
    {
        cout << "por formula pitagorica si es un tringulo rectangulo" << endl;
    }
    else
    {
        cout << "No cumple con la formula pitagorica, por lo que no es considerado un triangulo rectangulo" << endl;
    }
    if (angulo1 + angulo2 + angulo3 != 180)
    {
        cout << "No es un triangulo, entonces no puede ser un triangulo rectangulo" << endl;
    }
    int i = 1;
    for (int i = 1; i < lado1; i++)
    {
        cout << "@" << endl;
        /*if (i = lado1)
        {
            for (int j = 1; j <= lado2; j++)
            {
                cout << "@";
            }
        }*/
    }
    //graficando el triangulo
    if (i = lado1)
    {
        for (int j = 1; j <= lado2; j++)
        {
            cout << "@";
        }
    }
    //perimetro
    if (perimetro = lado1 + lado2 + lado3)
    {
        cout << "\nEl perimetro de la figura es : " << perimetro << endl;
    }
    if (lado1 == 0 || lado2 == 0 || lado3 == 0)
    {
        cout << "\nfaltan datos para encontrar el perimetro del triangulo  " << endl;
    }
    if (area = lado1 * lado2 / 2)
    {
        cout << "\nEl area del triangulo es " << area << endl;
    }
    else
    {
        cout << "\nfaltan datos para encontrar el area" << endl;
    }
    /*
    int triangulo[6] = { lado1,lado2,lado3,angulo1,angulo2,angulo3 };
    for (int i = 0; i <= triangulo[i]; i++)
        float j;
        j = triangulo[i];
    if (j == -1)
    {
        cout << " faltan " << j << endl;
    }
    */
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
