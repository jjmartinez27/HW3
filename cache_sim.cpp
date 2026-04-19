#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char* argv[]) {

    if (argc !=4)
    {
        std::cout << "usage: ./cache_sim num_entries associativity memory_reference_file" << std::endl;
        return 1;
    }

    int num_entries = std::stoi(argv[1]);
    int associativity = std::stoi(argv[2]);
    std::string memory_reference_file = argv[3];

    std::ifstream input_file(memory_reference_file);
    if (!input_file.is_open())
    {
        std::cout << "Error: could not open input file." << std::endl;
        return 1;
    }

    std::ofstream output_file("cache_sim_output");
    if (!output_file.is_open())
    {
        std::cout << "Error: could not open output file." << std::endl;
        return 1;
    }

    std::cout << "Number of entries: " << num_entries << std::endl;
    std::cout << "Associativity: " << associativity << std::endl;
    std::cout << "Memory reference file: " << memory_reference_file << std::endl;
    std::cout << "Files opened successfully." << std::endl;

        return 0;
}