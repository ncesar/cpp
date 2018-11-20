#include <iostream>
 
using std::cout;
using std::cin;
using std::endl;
 
int main(){
 
    int number1,number2;
 
    cout << "Digite o número 1: ";
    cin >> number1;
 
    cout << "Digite o número 2: ";
    cin >> number2;
 
    if(number1 > number2){
        cout << "Número 1 é maior." << endl;
    }else if(number1 == number2){
        cout << "Os números são iguais" << endl;
    }else{
        cout << "Número 2 é maior." << endl;
    }
 
    return 0;
}
