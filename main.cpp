#include <iostream>

int main() {
    const int STROKA = 3;
    const int COLUM = 5;
    double arr[STROKA][COLUM];
    double avg[STROKA];

    for (int i = 0; i < STROKA; i++) {
        std::cout << "Введите " << COLUM << " элементов для строки " << i + 1 << ":" << std::endl;
        for (int j = 0; j < COLUM; j++) {
            std::cin >> arr[i][j];
        }
    }

    for (int i = 0; i < STROKA; i++) {
        double sum = 0;
        for (int j = 0; j < COLUM; j++) {
            sum += arr[i][j];
        }
        avg[i] = sum / COLUM;
    }

    std::cout << "Массив:" << std::endl;
    for (int i = 0; i < STROKA; i++) {
        for (int j = 0; j < COLUM; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "Среднее арифметическое для каждой строки:" << std::endl;
    for (int i = 0; i < STROKA; i++) {
        std::cout << "Строка " << i + 1 << ": " << avg[i] << std::endl;
    }

    return 0;
}