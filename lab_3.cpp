#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string get_word(istream& is) {
    string w;
    is >> w;
    return w;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    ifstream file("text.txt");
    if (!file) {
        cerr << "Не удалось открыть файл" << endl;
        return 1;
    }

    string word, max_word;
    size_t len, max_len = 0;

    while (file) {
        word = get_word(file);
        if (word.length() == 0)
            break;
        len = word.length();
        if (len > max_len) {
            max_len = len;
            max_word = word;
        }
        
    }

    file.close();

    cout << "Самое длинное слово:  \"" << max_word << "\"" << endl;

    return 0;
}