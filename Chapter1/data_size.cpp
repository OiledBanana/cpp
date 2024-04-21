#include <iostream>
#include <string>

//size of data

using namespace std;

int main(){
 int elephant_count; //may contain garbage value
 int lion_count = 0; //initalize to zero
 int dog_count = 10;//initializa to 10
 int cat_count = 8;//initialize to 15

 int domesticated_animalas = cat_count + dog_count; // can use expression as initializer


cout << "Size of int: " << sizeof(int) << endl;
cout << "Size of cat_count: " << sizeof(cat_count) << endl;

    return 0;
}
