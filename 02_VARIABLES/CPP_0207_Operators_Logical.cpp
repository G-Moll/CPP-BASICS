#include <iostream>
using namespace std;

int main() {
    /* OPERATORS LOGICAL
        && And
        || Or
        !  Not
    */

    bool single =  true;
    bool adult = true;
    bool mexican = false;

    // && Exclude
    cout << "Single && Adult: " << ( single && adult ) << endl;
    cout << "Single && Mexican: " << ( single && mexican ) << endl;
    cout << "Single && !Mexican: " << ( single && !mexican ) << endl;

    // || Include
    cout << "Single || Adult: " << ( single || adult ) << endl;
    cout << "Single || Mexican: " << ( single || mexican ) << endl;
    cout << "!Single || Mexican: " << ( !single || mexican ) << endl;

    return 0;
}
