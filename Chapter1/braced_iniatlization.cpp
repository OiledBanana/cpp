#include <iostream>
#include <string>

// variabled braced initialization

using namespace std;

int main()
 int elephant_count; //may contain garbage value
 int lion_count{}; //contains zero
 int dog_count{10};//initializa to 10
 int cat_count{15};//initialize to 15

 int domesticated_animals {dog_count + cat_count}; // can use expression as initializer

 int bad_initalization {null_value1 + null_value2}; // cant initialize undeclared variable

 int narrowing_conversion {2.9}; //2.9 is double may loss data

    return 0;
}
