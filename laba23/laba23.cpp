// laba23.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    char C;
    int k = 0;
    char string[100];
    //задание 1
    cout << "Task 1.";
    cout << "\nPrint char: ";
    cin >> C; //ввод символа
    cout << "\nAnswer: "<< static_cast<char>(C-1)<<" "<< C<<" "<< static_cast<char>(C+1);  //вывод символов предшествующего С, С, и последующего за С
    //задание 2
    cout << "\n\nTask 2.";
    char str[] = "cool string";
    cout << "\nString: " << str;
    cout << "\nAnswer: ";
    for (int i = 0; i < strlen(str); i++)
        cout << str[i] << " ";
    //задание 3
    cout << "\n\nTask 3.";
    
    cout << "\nPrint string: ";
    gets_s(string); //ввод строки
    for (int i = 0; i < strlen(string); i++)
        if (isupper(string[i])) //если буква заглавная
            k++;      //наращиваем количество
    cout << "\nAnswer: "<<k;
    //задание 4
    cout << "\n\nTask 4.";
    cout << "\nPrint string: ";
    gets_s(string); //ввод строки
    cout << "Print char: ";
    cin >> C; //ввод символа
    cout << "\nAnswer: ";
    for (int i = 0; i < strlen(string); i++)
    {
        cout << string[i];
        if (string[i] == C)
            cout << string[i];
    }
    //задание 5
    cout << "\n\nTask 5.";
    char string0[100];
    cout << "\nPrint first string: ";
    gets_s(string); //ввод строки
    cout << "Print second string: ";
    gets_s(string0); //ввод строки
    k = 0; int j, t; bool b ;
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == string0[0]) //если первые символы равны
        {
            j = i; t = 0; b = false;
            while (j < strlen(string) && t<strlen(string0)) //пока не закончилась первая строка и вторая строка
                if (string[j] == string0[t]) //если символы равны
                {
                    j++; t++;//переход к следующему символу для проверки совпадения
                    b = true;//флаг, строки пока совпадают
                }
                else 
                {
                    j++; t++;
                    b = false;//строки не совпадают
                    break;//переход к след символам, выход из цикла
                }
            if (b) k++;
        }
    }
    cout << "\nAnswer: "<< k;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
