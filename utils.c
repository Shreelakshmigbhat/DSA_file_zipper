#include "utils.h"

void readFile(char *filename, char *buffer, int *len) {
    FILE *fp = fopen(filename, "r");
    if (!fp) {
        printf("Error opening file!\n");
        return;
    }
    *len = fread(buffer, 1, 10000, fp);
    fclose(fp);
}

void countFrequency(char *buffer, int len, char *chars, int *freq, int *uniqueCount) {
    int count[256] = {0};
    for (int i = 0; i < len; i++)
        count[(unsigned char)buffer[i]]++;
    int index = 0;
    for (int i = 0; i < 256; i++) {
        if (count[i]) {
            chars[index] = (char)i;
            freq[index] = count[i];
            index++;
        }
    }
    *uniqueCount = index;
}
