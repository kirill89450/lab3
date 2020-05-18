#include <iostream>

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
char* concatination(char* first, char* second, int a, int b) {
    int newSize = a + b;
    char* s = (char*)calloc(newSize, sizeof(char));
    int i = 0;
    for (i = 0; i < a; i++) s[i] = first[i];
    for (int j = 0; j < b; j++) s[i + j] = second[j];
    return s;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    char s1[100], s2[100];
    cout << "Введите 1 строку: " << endl;
    cin.getline(s1, 100);
    cout << "Введите 2 строку: " << endl;
    cin.getline(s2, 100);
    cout << "Строки: " << endl << s1 << endl << s2 << endl;
    int newSize = getSize(s1) + getSize(s2);
    char* s = concatination(s1, s2, getSize(s1), getSize(s2));
    cout << "Конкатенация: ";
    for (int k = 0; k < newSize; k++) cout << s[k];


    return 0;
}