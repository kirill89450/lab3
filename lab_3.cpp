#include <iostream>

using namespace std;
int getSize(char* string);
int main(){
    char text[] = "\n Do you like programming? \n I love programming! \n But sometimes i lose my head from love \n";
    int len = getSize(text);
    cout << "текст: " << text << endl;
    int pos = 0, wrdlen = 0, wrdlenMax = 0;
    for (int i = 0; i < len; i++) {
        if ((text[i] != ' ') and (text[i] > 64) and (text[i] < 123)) wrdlen++;
        if ((text[i] == ' ') or (len - i == 1)) {
            if (wrdlen > wrdlenMax) {
                i--;
                pos = i - wrdlen;
                wrdlenMax = wrdlen;
            }
            wrdlen = 0;
        }
    }
    cout << "Самое большое слово: ";
    for (int i = 0; i < wrdlenMax; i++)
        cout << text[i + pos];
    return 0;
}
int getSize(char* string)
{
    int size = 0;
    int i = 0;
    while (string[i] != '\0') {
        size++;
        i++;
    }
    return size;
}