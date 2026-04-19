# HW3

## Author
Jaime Martinez

## Description
This program simulates a cache using a given number of entries, associativity, and a memory reference file.

The program takes three command-line arguments:

num_entries - the total number of cache entries

associativity - the associativity of the cache

memory_reference_file - a file containing memory references separated by spaces

The simulator starts with an empty cache and reports whether each memory reference is a HIT or MISS. The results are written to a file named `cache_sim_output`.

## Build
g++ -std=c++17 cache_sim.cpp -o cache_sim

## Instructions
Run the program with ./cache_sim num_entries associativity memory_reference_file

### Example
./cache_sim 4 2 refs.txt

## Example Output File (`cache_sim_output`)
1 : MISS

3 : MISS

5 : MISS

1 : MISS

3 : MISS

1 : HIT

### Notes
This implementation uses FIFO replacement when a set is full.

The simulator assumes each cache block contains one word.

The simulator assumes the input memory references are word addresses.
