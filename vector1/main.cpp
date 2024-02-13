#include <iostream>
#include <vector>

int main() {
    int rows, cols;

    std::cout << "Введите количество строк матрицы: ";
    std::cin >> rows;
    std::cout << "Введите количество столбцов матрицы: ";
    std::cin >> cols;

    std::vector<std::vector<double>> matrix(rows, std::vector<double>(cols));
    for (int i = 0; i < rows; i++) {
        std::cout << "Введите " << cols << " элементов для строки " << i + 1 << ": ";
        for (int j = 0; j < cols; j++) {
            std::cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < rows; i++) {
        double sum = 0;
        for (int j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
        double average = sum / cols;
        std::cout << "Среднее арифметическое элементов строки " << i + 1 << ": " << average << std::endl;
    }

    return 0;
}
