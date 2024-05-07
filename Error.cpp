#include <iostream>

int main() {
    int numero1 = 5;
    int numero2 = 3;
    
    // Error: Falta un punto y coma al final de la declaración
    int suma = numero1 + numero2
    
    std::cout << "La suma de los números es: " << suma << std::endl;
    
    // Error: Uso de una variable no declarada
    std::cout << "El producto de los números es: " << producto << std::endl;
    
    return 0;
}
