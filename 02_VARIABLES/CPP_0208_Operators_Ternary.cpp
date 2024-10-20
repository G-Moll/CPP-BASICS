#include <iostream>
using namespace std;

int main() {
    /* OPERATOR TERNARY
        ? :
    */

    int age = 45;
    char canVote;

    canVote = age >= 18 ? 'Y' : 'N';
    cout << "Can Vote?: " << canVote << endl;

    return 0;
}
