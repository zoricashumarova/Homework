#include <iostream>

using namespace std;

/*
3. Напиши програма која од стандарден влез ќе прочита број на редици и колони (n <= 10,
m <= 10) што ќе ги содржи една матрица од природни броеви. Од стандарден влез внеси
ги елементите на матрицата.

Креирај нова матрица која ќе биди трансформација на внесената матрица така што секој
елемент ќе биди трансформиран во својот број на десетки (пр. 175 -> 7, 87-> 8, 5 ->0).
Отпечати ја добиената матрица.
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

void transformMatrix(int matrix[][10], int n, int m) {
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            matrix[i][j] = (matrix[i][j] / 10) % 10;
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

    transformMatrix(matrix, n, m);

    printMatrix(matrix, n, m);

    return 0;
}
