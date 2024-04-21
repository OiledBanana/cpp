#include <iostream>
#include <string>

//size of data

using namespace std;

int main(){
 int elephant_count; //may contain garbage value
 int lion_count = 10; //initalize to zero
 int dog_count {15}; // braced initialization
 int cat_count (40); // functional initalization

 cout << "Lion count is " << lion_count << endl;
 cout << "Dog count is " << dog_count << endl;
 cout << "Cat count is " << cat_count << endl;
 cout << "Elephant count is " << elephant_count <<  endl;

    return 0;
}
