#include <iostream>//Entrada y salida de la consola
using namespace std;

//Se delcara la función para la serie fibonacci
int fibo(int n){
    if(n<=1){
        cout << "n=" << n << " caso base\n";
        return 1;
    }else{
        int x = fibo(n-2);
        int y = fibo(n-1);
        cout << "n=" << n << " x=" << x
          << " y=" << y << endl;
        return x + y;
    }
}

//Inicia el programa
int main() {
    int n;
    cout << "\nFibonacci de:\t";
    cin >> n;
    int f = fibo(n);
    cout << "Resultado: " << n << endl;
}
