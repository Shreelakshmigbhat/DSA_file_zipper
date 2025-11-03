#include "huffman.h"
#include "utils.h"

int main() {
    char buffer[10000];
    int len = 0;
    char chars[256];
    int freq[256];
    int uniqueCount = 0;

    readFile("sample.txt", buffer, &len);
    countFrequency(buffer, len, chars, freq, &uniqueCount);

    printf("Character Frequencies:\n");
    for (int i = 0; i < uniqueCount; i++)
        printf("%c: %d\n", chars[i], freq[i]);

    printf("\nHuffman Codes:\n");
    HuffmanCodes(chars, freq, uniqueCount);

    return 0;
}
