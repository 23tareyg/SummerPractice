#include <iostream>

int matrixMultiply(int arr1[][], int arr2[][]) {
    const int size1 = 3; //rows of matrix 1
    const int size2 = 2; //columns of matrix 1 and rows of matrix 2
    const int size3 = 4; //rows of matrix 2

    int solnarr[size1][size3];

    for (int i = 0; i < size3; i++) {
        int temp1;
        for (int j = 0; j < size1; j++) {

            for (int k = 0; k < size2; k++) {
                temp1 += (arr1[j][k] * arr2[k][i]);
            }
            solnarr[j][i] = temp1;
            temp1 = 0;
        }

    }
    return solnarr;
}

int main() {

    int arr1[size1][size2] = {
        {1, 1},
        {4, 2},
        {2, 1}
    };
    int arr2[size2][size3] = {
        {3, 1, 3, 1},
        {2, 2, 1, 4}
    };

    std::cout << *matrixMultiply(arr1, arr2) << std::endl; //outputs the element at row 2 column 4 -- 12
}
