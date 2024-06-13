#include <iostream>

void Input(int arr1[][5], int arr2[][5], int rowOne, int colOne, int rowTwo, int colTwo) {
    using namespace std;

    cout << "Enter elements for matrix A: " << endl;
    
    // First matrix
    for (int i = 0; i < rowOne; i++) {
        for (int j = 0; j < colOne; j++) {
            cout << "Row " << i + 1 << " " <<  "Column " << j + 1 << ": ";
            cin >> arr1[i][j];
        }
    }

    cout << "Enter elements for matrix B: " << endl;
    // Second matrix
    for (int i = 0; i < rowTwo; i++) {
        for (int j = 0; j < colTwo; j++) {
            cout << "Row " << i + 1 << " " << "Column " << j+1 << ": ";
            cin >> arr2[i][j];
        }
    }
}

void Display(int solnarr[][5], int sizeRow, int sizeCol) {
    using namespace std;

    //loop through and display each element
    for (int i = 0; i < sizeRow; i++) {
        for (int j = 0; j < sizeCol; j++) {
            cout << solnarr[i][j] << "   ";
            if (j == (sizeCol - 1)) {
                cout << "\n";
            }
        }
    }
}

void matrixMultiply(int arr1[][5], int arr2[][5], int solnarr[][5], int rowOne, int colOne, int rowTwo, int colTwo) {
    using namespace std;

    //set size of arr to all zeroes
    for (int i = 0; i < rowOne; i++)
    {
        for (int j = 0; j < colTwo; j++)
        {
            solnarr[i][j] = 0;
        }
    }

    //multiply matricies
    for (int i = 0; i < colTwo; i++) {
        int temp1 = 0;
        for (int j = 0; j < rowOne; j++) {

            for (int k = 0; k < colOne; k++) {
                temp1 += (arr1[j][k] * arr2[k][i]);
            }
            solnarr[j][i] = temp1;
            temp1 = 0;
        }

    }

}

int main() {
    using namespace std;

    // Define variables
    int rowOne, colOne, rowTwo, colTwo, arr1[5][5], arr2[5][5], solnarr[5][5];

    // Get dimensions
    cout << "Enter rows then columns of matrix one: ";
    cin >> rowOne >> colOne;
    cout << "Enter rows then columns of matrix two: ";
    cin >> rowTwo >> colTwo;

    // Make sure columns and rows of each matrix are good to multiply
    while (colOne != rowTwo) {
        cout << "The columns of matrix 1 need to equal the rows of matrix 2" << endl;
        cout << "Enter rows then columns of matrix one: ";
        cin >> rowOne >> colOne;
        cout << "Enter rows then columns of matrix two: ";
        cin >> rowTwo >> colTwo;
    }

    // Run functions
    Input(arr1, arr2, rowOne, colOne, rowTwo, colTwo);
    matrixMultiply(arr1, arr2, solnarr, rowOne, colOne, rowTwo, colTwo);
    Display(solnarr, rowOne, colTwo);



    /*
    int testarr1[5][5] = {
        {1, 1},
        {4, 2},
        {2, 1}
    };
    int testarr2[5][5] = {
        {3, 1, 3, 1},
        {2, 2, 1, 4}
    };
    int testarr3[5][5];
    int testarr4[5][5];
    */
    
}
