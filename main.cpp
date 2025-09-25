#include <iostream>
using namespace std;

int sumarRef(int &carga, int w) // Version sumar
{

    carga += w; // Sumatoria para encontrar la carga final
    return carga;
}

void restarPtr(int *carga, int w) // Version restar
{

    if (carga != nullptr) // Verificar que no sea una direccion vacia
    {
        *carga -= w;
    }
}

void simularOperacionValor(int carga, int w) // Version simulacion.
{
    char op;

    cout << "Ingrese A, si desea sumar energia" << endl;
    cout << "Ingrese B, si desea restar energia" << endl; // Opciones
    cin >> op;

    if (op == 'A') // Si es "A"
    {
        cout << "Ingrese cuanta carga se genero:" << endl;
        cin >> w;
        carga += w;
        cout << "La carga total es: " << carga << endl;
    }
    if (op == 'B') // Resta si es "B"
    {
        cout << "Ingrese cuanta carga se genero:" << endl;
        cin >> w;
        carga -= w;
        cout << "La carga total es: " << carga << endl;
    }
    else
    {
        cout << "Opcion invalida." << endl; //"Si no es ninguno."
    }
}

int main()
{
    int opcion;
    int w;
    int carga = 50;
    // Menu
    cout << "  MENU: " << endl;
    cout << "1.Sumar energia" << endl;
    cout << "2.Restar consumo " << endl;
    cout << "3. Simulacion de carga/consumo" << endl;
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        cout << "Ingrese la energia generada" << endl;
        cin >> w;
        sumarRef(carga, w);
        cout << "La carga total es: " << carga << endl;
        break;

    case 2:
        cout << "Ingrese la energia generada" << endl;
        cin >> w;
        restarPtr(&carga, w);
        cout << "La carga total es: " << carga << endl;
        break;

    case 3:
        simularOperacionValor(carga, w);
        break;

    default:
        break;
    }
}