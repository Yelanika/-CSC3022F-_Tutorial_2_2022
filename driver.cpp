#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

int main(void) {
    std::string filename = "menu_1.txt";
    std::vector<std::string> menu_items;

    std::ifstream in(filename);

    if(!in) {
        std::cout << "Couldn't open file " << filename << std::endl;
        return 1;
    }

    std::string line;
    while(std::getline(in,line)) {
        menu_items.push_back(line);
    }

    in.close();

    std::cout << menu_items.size() << "Items on the menu" << std::endl;

}