//
// Created by arvcs on 7/24/2019.
//

#include "JsonReader.h"
#include <fstream>
#include "json/json.h"


void JsonReader::readJsonFile(string path) {
    Json::CharReaderBuilder charReader;
    Json::Value root;
    Json::StreamWriterBuilder writer;


    cout<< "Path of the text file is :" << path << endl;


    cout<< "Nothing to read" << endl;
}