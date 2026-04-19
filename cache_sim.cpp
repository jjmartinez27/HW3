#include <iostream>
#include <string>

int main(int argc, char* argv[]) {

    if (argc !=4)
        {
            std::cout << "usage: ./cache_sim num_entries associativity memory_reference_file" << std::endl;
            return 1;
        }

    int num_entries = std::stoi(argv[1]);
    int associativity = std::stoi(argv[2]);
    std::string memory_reference_file = argv[3];

    std::cout << "Number of entries: " << num_entries << std::endl;
    std::cout << "Associativity: " << associativity << std::endl;
    std::cout << "Memory reference file: " << memory_reference_file << std::endl;


        return 0;
}