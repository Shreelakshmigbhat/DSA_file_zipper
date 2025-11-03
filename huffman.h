#ifndef HUFFMAN_H
#define HUFFMAN_H

#include <stdio.h>
#include <stdlib.h>

#define MAX_TREE_HT 256

typedef struct MinHeapNode {
    char data;
    unsigned freq;
    struct MinHeapNode *left, *right;
} MinHeapNode;

typedef struct MinHeap {
    unsigned size;
    unsigned capacity;
    MinHeapNode **array;
} MinHeap;

MinHeapNode* newNode(char data, unsigned freq);
MinHeap* createMinHeap(unsigned capacity);
void insertMinHeap(MinHeap* minHeap, MinHeapNode* node);
MinHeapNode* extractMin(MinHeap* minHeap);
void buildMinHeap(MinHeap* minHeap);
void HuffmanCodes(char data[], int freq[], int size);
void printCodes(MinHeapNode* root, int arr[], int top);

#endif
