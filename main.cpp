#include <iostream>
#include "JsonReader.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    JsonReader* j1 = new JsonReader();
    j1->readJsonFile("C:\\Users\\arvcs\\CLionProjects\\Assignment\\medium.txt");

    return 0;
}