#include "armstrong_numbers.h"
#include <math.h>

bool is_armstrong_number(int candidate){
    int number_of_digits;
    int counter;
    int digit;
    int aux;
    int power;
    int result;

    number_of_digits = log10(candidate) + 1;
    result = 0;
    aux = candidate;

    for (counter = number_of_digits; counter >= 1; counter--){
        power = pow(10, counter - 1);
        digit = aux / power;
        result += pow(digit, number_of_digits);
        aux -= digit * power;
    }

    return result == candidate;
}