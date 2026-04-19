#include <iostream>

int main(int argc, char* argv[]) {

      if (argc !=4)
        {
          std::cout << "usage: ./cache_sim num_entries associativity memory_reference_file" << std::endl;
          return 1;
        }

        return 0;
}