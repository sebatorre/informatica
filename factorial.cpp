#include <iostream>
int main()
{   
    int num, fact;
    fact = 1;

    std::cout << "escribi el numero que quieras conocer el factorial\n";
    std::cin >> num;
        for ( int E = 1; E <= num; E++)
        {   
            fact = fact * E;

        }
        std::cout << "el factorial de "<< num <<" es:" << fact;
        return 0;
}