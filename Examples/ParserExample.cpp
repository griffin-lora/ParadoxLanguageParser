#include "Parser.h"
#include <iostream>
#include <sstream>
#include <fstream>

int main() {
    std::stringstream stream;
    stream << std::ifstream("ParserExample.txt").rdbuf();
    ParadoxLanguage::Object object(stream.str());

    return 0;
}