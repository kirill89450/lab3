#include <iostream>
#include "cstdio"
#include "stdio.h"
using namespace std;
int getSize(char* string) {
    int size = 0;
    int i = 0;
    while (string[i] != '\0') {
        size++;
        i++;
    }
    return size;
}
void bubbleSort(char** text) {
    bool exit = false;
    while (!exit) {
        exit = true;
        for (int i = 1; i < 4; i++)
            if (getSize(text[i]) < getSize(text[i + 1])) {
                swap(text[i], text[i + 1]);
                exit = false;
            }
    }
}


int main() {
    int maxSize = 40;
    char** text = new char* [3];
    cout << "Please, enter the text: " << endl;
    for (int i = 1; i <= 4; i++) {
        text[i] = new char[maxSize];
       gets(text[i]);
    }
    cout << "Text: " << endl;
    for (int i = 0; i <= 3; i++) cout << text[i] << endl;
    cout << endl;
    bubbleSort(text);
    cout << "Sorted text: " << endl;
    for (int i = 0; i <= 3; i++) cout << text[i] << endl;
    return 0;
}