// lab3.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    char s1[] = "привет";
    char s2[] = "мир";
    cout <<"Имеются строки"<<endl<< s1 << endl << s2 << endl;
    int size = 12;
    char* s3 = (char*)calloc(size, sizeof(char));
    int i = 0;
    for (i = 0; i < 7; i++) s3[i] = s1[i];
    for (int j = 0; j < 4; j++) s3[i + j] = s2[j];
    cout << "Их конкатенация= ";
    for (int k = 0; k < 12; k++) cout << s3[k];
    return 0;
}
asd

