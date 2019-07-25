#include <iostream>
#include "JsonReader.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    JsonReader* j1 = new JsonReader();
    j1->readJsonFile("./test.txt");

    return 0;
}