#include "Vector.h"

int main() {

    Vector<int> vectorEnteros;

    vectorEnteros.pushBack(2);
    vectorEnteros.pushBack(7);

    for(size_t i = 0; i < vectorEnteros.getSize(); i++) {
        std::cout << vectorEnteros.popBack(i) << std::endl;
    }

    return 0;
}