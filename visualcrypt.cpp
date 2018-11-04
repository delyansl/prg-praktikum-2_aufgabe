#include <iostream>
#include <string>
#include <map>

#include "npicture.h"

std::map<std::string, int> control_map;

void init_control_map();

int main(int argc, char *argv[])
{
    // Get input data from the console arguments.
    std::string input_data = "";
    for (int i = 2; i < argc; i++)
    {
        input_data += argv[i];
    }

    NPicture picture(argc - 2, input_data);

    // Initialize the command map for a more readable switch case.
    init_control_map();

    // Decide which command to issue/process.
    switch (control_map[argv[1]])
    {
    case 1:
        std::cout << "Encode\n";
        break;
    case 2:
        std::cout << "Decode\n";
        break;
    case 3:
        std::cout << "Overlay\n";
        break;
    default:
        std::cout << "Not a valid command\n";
    }

    return 0;
}

void init_control_map()
{
    control_map["encode"] = 1;
    control_map["decode"] = 2;
    control_map["overlay"] = 3;
}
