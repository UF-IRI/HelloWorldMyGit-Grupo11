

#include "example.h"


int main()
{
    
    int num1, num2;
    cout << "ingrese divisor: ";
    cin >> num1;
    cout << "ingrese dividendo: ";
    cin >> num2;

    float div = Dividir(num1, num2);
    int dni = DNI();

    cout << "El resultado de la division es: " << div << endl;
    cout << "DNI ingresado: " << dni << endl;

    return 0;
}
