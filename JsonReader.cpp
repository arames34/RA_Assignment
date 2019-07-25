//
// Created by arvcs on 7/24/2019.
//
#include "JsonReader.h"
#include "json/json.h"
#include "data.h"
#include <fstream>
using namespace std;

void JsonReader::readJsonFile(string path) {
    Json::Value root;   // will contains the root value after parsing.
    Json::Reader reader;
    std::ifstream test(path, std::ifstream::binary);
    bool parsingSuccessful = reader.parse(test, root, false);
    int N = 3;
    if (parsingSuccessful)
    {
        for (size_t i = 0; i < root.size(); i++)
        {
            string id = root[i].get("id", "ASCII").asString();
            cout<<"id: "<< id  << endl;
            cout<<"Cost: "<<root[i].get("cost", "ASCII").asString()<<endl;
            Json::Value cost_array = root[i].get("cost_components",NULL);
            for (int i =0; i< cost_array.size(); i++){

                cout << "VALUES:" << cost_array[i] << endl;
            }
            // etc.
        }
    }
}