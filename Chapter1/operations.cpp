#include <iostream>

using namespace std;

int addNumbers(int first_param, int second_param ){
    int result = first_param + second_param;
    return result;
}

int multplyNumbers(int first_param, int second_param){
    int result = first_param * second_param;
    return result;

}

int divisionNumbers (int first_param, int second_param){
    int result = first_param / second_param;
    return result;
}
int main()
{
    int first_number = {50};
    int second_number = {2};

    int sum = addNumbers(first_number,second_number);
    int product = multplyNumbers(first_number, second_number);
    int quotient = divisionNumbers(first_number, second_number);
    cout << "Sum: " << sum << std::endl;
    cout << "Product: " << product << std::endl;
    cout << "Quotient: " << quotient << std::endl;
    return 0;

}
