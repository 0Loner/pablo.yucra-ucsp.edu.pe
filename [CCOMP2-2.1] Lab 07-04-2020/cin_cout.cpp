// cin_cout.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
    /*
    //nombre
    //edad
    //celular
    //direccion
    //hobbie
    char nombre[128];
    int edad;
    int celular;
    string direccion;
    string hobbie;
    char valor;
    cout << "Ingresa tus datos sin usar la tecla espacio PORFAVOR : " << endl;
    cout << "Ingresa tu nombre: ";
    cin >> nombre ;
    cout << "Ingresa tu edad: ";
    cin >> edad;
    cout << "Ingresa tu celular: ";
    cin >> celular;
    cout << "Ingresa tu direccion: ";
    cin >> direccion;
    cout << "Ingresa tu hobbie es:";
    cin >> hobbie;
    cout << "Tu informacion es la siguiente : " << endl;
    
    cout << "Tu nombre es : " << nombre << endl;
    cout << "Tu edad es : " << edad << endl;
    cout << "Tu celular es : " << celular << endl;
    cout << "Tu direccion es : " << direccion << endl;
    cout << "Tu hobbie es : " << hobbie << endl;
    return 0;
    */

    /*
    cout << "Calculadora de dos NUMEROS----> Ingrese sus numeros enteros o flotantes ";
    float a, b,suma,resta,multiplicacion,division,raizcuadrada,raizcuadrada_ ;
    cout << "Ingrese dos numerops en el orden en que quiere ejecutar su operacion" << endl;
    cout << "Ingresa el primer numero: ";
    cin >> a;
    cout << "Ingresa el segundo numero: ";
    cin >> b;
    suma = a + b;
    cout << suma << endl;
    resta = a - b;
    cout << resta << endl;
    multiplicacion = a * b;
    cout << multiplicacion;
    division = a / b;
    cout << division << endl;
    raizcuadrada = sqrt(a);
    raizcuadrada_ = sqrt(b);

    cout <<"raiz cuadrada del primer numero" <<raizcuadrada << endl;
    cout << "raiz cuadrada de lsegundo numero" << raizcuadrada_ << endl;
    return 0;
    */

    //Escriba un programa que realize el calculo del area de un circulo, un cuadrado y un triángulo, para esto defina que datos el programa debe pedir de su usuario.

    cout << "Ingresa los datos de tu circulo" << endl;
    float pi = 3.14, radio,areaCirculo;
    cout << "Ingresa el radio del circulo" << endl;
    cin >> radio;
    areaCirculo = pi * (radio * radio);
    cout <<"el area del circulo es : "<<areaCirculo << endl<<endl;

    cout << "Ingresa los datos de tu cuadrado" << endl;
    float lado,areaCuadrado;
    cout << "Ingresa el valor del lado" << endl;
    cin >> lado;
    areaCuadrado = lado * lado;
    cout <<"el area del cuadrado es :"<< areaCuadrado << endl << endl;

    cout << "Ingresa los datos de tu triangulo rectangulo"<<endl;
    float base, altura,areaTriangulo;
    cout << "Ingresa la base y la altura";
    cin >> base;
    cin >> altura;
    areaTriangulo = (base*altura)/ 2;
    cout <<"el area del tringulo rectangulo es : "<< areaTriangulo << endl << endl;

    cout << "Ingresa los datos del triangulo equilatero: " << endl;
    float lado_deltriangulo,areaTrianguloEquilatero;
    cout << "Ingresa el valor de una lado del triangulo equilatero :" << endl;
    cin >> lado_deltriangulo;
    areaTrianguloEquilatero = ((sqrt(3)) / 4) * (lado);
    cout << "el area del triangulo equilatero es : " << areaTrianguloEquilatero << endl << endl;

    cout << "Ingresa los datos del triangulo isosceles : " << endl;
    float ladosiguales, ladomenor,areaTrianguloIsosceles;
    cout << "Ingresa el valor de unos de los lados iguales : " << endl;
    cin >> ladosiguales;
    cout << "Ingresa el valor del tercerlado : " << endl;
    cin >> ladomenor;
    areaTrianguloIsosceles = (ladomenor * sqrt((ladosiguales * ladosiguales) - ((ladomenor * ladomenor) / 4)))/2;

    cout << "Ingresa los datos del triangulo escaleno : " << endl;
    cout << "El área del triángulo escaleno puede calcularse mediante la fórmula de Herón si se conocen todos sus lados (b,n,m)." << endl;
    float b, n, m,semiperimetro,areaTrianguloEscaleno;
    semiperimetro = (b + n + m) / 2;
    areaTrianguloEscaleno = sqrt(semiperimetro * (semiperimetro - b) * (semiperimetro - n) * (semiperimetro - m));

    return 0;
}



// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
