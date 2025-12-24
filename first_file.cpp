//Первая программа на языке С++
#include <iostream>

int main(){
    char str[100]="Hi Michail";
    short old;
    double weight;
    std::cin >> old >> weight;
    std::cout << str << "\n" << old << "\n" << weight << std::endl;
    return 0;
}