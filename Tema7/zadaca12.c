#include <iostream>

using namespace std;

/*
12. Напиши програма каде ќе се внеси матрица од 5-ти ред преку тастатура и ќе се
формира низа од сумата по колони. Резултатот да се отпечати
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

int sumColumns(int matrix[][5], int n) {
    int arr[n];

    for (int j=0; j<n; j++) {
        int suma = 0;
        for (int i=0; i<n; i++) {
            suma += matrix[i][j];
        }
        arr[j] = suma;
    }

    cout<<"Nizata so sumite od koloni e:"<<endl;
    for (int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
}

int main()
{

    int matrix[5][5];

    insertValues(matrix, 5);

    printMatrix(matrix, 5);

    sumColumns(matrix, 5);

    return 0;
}
