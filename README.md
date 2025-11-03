# DSA_file_zipper
# File Zipper using DSA (Huffman Coding)

## Project Overview
This project implements a File Zipper (Compressor) using Huffman Coding, a lossless data compression algorithm based on Binary Trees and Min Heaps.  
It takes an input text file, calculates the frequency of each character, builds a Huffman Tree, and generates binary codes for efficient encoding.

The project demonstrates applications of:
- Dynamic Memory Allocation  
- Structures  
- Binary Trees  
- Min Heap / Priority Queue  
- Recursion

---

## Concept

Huffman Coding Algorithm Steps:
1. Read input file and calculate the frequency of each character.
2. Create a Min Heap where each node represents a character and its frequency.
3. Build the Huffman Tree by repeatedly extracting two nodes with the smallest frequencies and combining them into a new node.
4. Assign binary codes:
   - Left edge → 0  
   - Right edge → 1
5. Encode the text using these binary codes to achieve compression.

---

├── utils.h # Header file for utility functions
├── sample.txt # Sample input text file

