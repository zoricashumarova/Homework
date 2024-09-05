#include <iostream>

using namespace std;

/*
13. Напиши програма каде ќе се внеси матрица од 5-ти ред преку тастатура и ќе се
определи максималната сума по редици. Резултатот да се отпечати.
*/

void insertValues(int matrix[][5], int n) {
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            int element;
            cin>>element;
            matrix[i][j] = element;
        }
    }
}

void printMatrix(int matrix[][5], int n) {
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }
}

void maxSum(int matrix[][5], int n) {
    int maxSuma = 0;

    for (int i=0; i<n; i++) {
        int sumaRedici = 0;
        for (int j=0; j<n; j++) {
            sumaRedici += matrix[i][j];
        }

        if (sumaRedici > maxSuma) {
            maxSuma = sumaRedici;
        }
    }

    cout<<"Max suma po redici e: "<<maxSuma<<endl;
}

int main()
{
    int matrix[5][5];

    insertValues(matrix, 5);

    printMatrix(matrix, 5);

    maxSum(matrix, 5);

    return 0;
}
