#include <iostream>

using namespace std;

/*
2. Напиши програма која од стандарден влез ќе прочита број на редици и колони (n <= 10,
m <= 10) што ќе ги содржи една матрица од природни броеви. Од стандарден влез внеси
ги елементите на матрицата.

Програмата е потребно да ги промени местата на минималната и максималната вредност
во матрицата.
*/

void insertValues(int matrix[][10], int n, int m) {
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            int element;
            cin>>element;
            matrix[i][j] = element;
        }
    }
}

void printMatrix(int matrix[][10], int n, int m) {
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }
}

void swapElements(int matrix[][10], int n, int m) {
    int maxElement = matrix[0][0];
    int minElement = matrix[0][0];
    int minPozicijaRedica = 0;
    int maxPozicijaRedica = 0;
    int minPozicijaKolona = 0;
    int maxPozicijaKolona = 0;

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (matrix[i][j] > maxElement) {
                maxElement = matrix[i][j];
                maxPozicijaRedica = i;
                maxPozicijaKolona = j;
            }

            if (matrix[i][j] < minElement) {
                minElement = matrix[i][j];
                minPozicijaRedica = i;
                minPozicijaKolona = j;
            }
        }
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            int pom = matrix[maxPozicijaRedica][maxPozicijaKolona];
            matrix[maxPozicijaRedica][maxPozicijaKolona] = matrix[minPozicijaRedica][minPozicijaKolona];
            matrix[minPozicijaRedica][minPozicijaKolona] = pom;
        }
    }

}

int main()
{
    int n, m;
    cin>>n;
    cin>>m;

    int matrix[10][10];

    insertValues(matrix, n, m);

    printMatrix(matrix, n, m);

    swapElements(matrix, n, m);

    printMatrix(matrix, n, m);

    return 0;
}
