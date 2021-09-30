#include <iostream>
#include <stdio.h>
#include <stdlib.h> 

void main()
{
    int n;
    int**pArr;
    printf_s("n = ");
    scanf_s("%d", &n);
    pArr = (int**)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        pArr[i] = (int*)malloc(n * sizeof(int));
    }

    //Единицы обозначают крестики
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            pArr[i][j] = rand() % 2;
        }
    }

    //Проверка всех строк на наличи 5 единиц подряд
    for (int i = 0; i < n - 5; i++) {
        for (int j = 0; j < n; j++) {
            if (pArr[i][j] == pArr[i + 1][j] == pArr[i + 2][j] == pArr[i + 3][j] == pArr[i + 4][j] == 1) {
                std::cout << "X won";
                return;
            }
        }
    } 

    //Проверка всех рядов на наличи 5 единиц подряд
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-5; j++) {
            if (pArr[i][j] == pArr[i][j + 1] == pArr[i ][j + 2] == pArr[i][j + 3] == pArr[i][j + 4] == 1) {
                std::cout << "X won";
                return;
            }
        }
    }  
    
    //Проверка всех рядов на наличи 5 единиц подряд
    for (int i = 0; i < n - 5; i++) {
        for (int j = 0; j < n - 5; j++) {
            if (pArr[i][j] == pArr[i + 1][j + 1] == pArr[i + 2][j + 2] == pArr[i + 3][j + 3] == pArr[i + 4][j + 4] == 1) {
                std::cout << "X won";
                return;
            }
        }
    }
}