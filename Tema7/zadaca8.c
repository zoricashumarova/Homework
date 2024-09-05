#include <iostream>

using namespace std;

/*
8. Напиши програма која од стандарден влез ќе прочита матрица од 5-ти ред и ќе ја
определи сумата на главна дијагонала и сумата на споредна дијагонала. Двете суми да се
отпечатат.
*/

void insertValues(int matrix[][3], int n) {
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            int element;
            cin>>element;
            matrix[i][j] = element;
        }
    }
}

void printMatrix(int matrix[][3], int n) {
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }
}

void sums(int matrix[][3], int n) {
    int sumaGlavna = 0;
    int sumaSporedna = 0;

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (i == j) {
                sumaGlavna += matrix[i][j];
            }
             if (i+j == n-1) {
                sumaSporedna += matrix[i][j];
            }
        }
    }
    cout<<"Sumata na glavnata dijagonala e: "<<sumaGlavna<<endl;
    cout<<"Sumata na sporednata dijagonala e: "<<sumaSporedna<<endl;
}

int main()
{

    int matrix[3][3];

    insertValues(matrix, 3);

    printMatrix(matrix, 3);

    cout<<endl;

    sums(matrix, 3);
    return 0;
}
