#include <iostream>
#include <cstdlib>
#include <ctime>
#include "interface.h"
using namespace std;

int main() {
    ListParent LP;
    ListChild LC;
    bst T;

    createListParent(LP);
    createListChild(LC);
    createBST(T);
    srand((unsigned)time(NULL));

    menuUtama(LP, LC, T);
    return 0;
}
