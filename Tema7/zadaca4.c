#include <iostream>

using namespace std;

/*
4. Напиши програма која од стандарден влез ќе прочита број на редици и колони (n <= 10,
m <= 10) што ќе ги содржи една матрица од природни броеви. Од стандарден влез внеси
ги елементите на матрицата.

Програмата да го пресмета збирот на парните елементи во матрицата и збирот на
непарните елементи во матрицата. Резултатот да се испечати.
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

int sumaParni(int matrix[][10], int n, int m) {
    int sumaP = 0;

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (matrix[i][j] % 2 == 0) {
                sumaP += matrix[i][j];
            }
        }
    }
    return sumaP;
}

int sumaNeparni(int matrix[][10], int n, int m) {
    int sumaNP = 0;

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (matrix[i][j] % 2 != 0) {
                sumaNP += matrix[i][j];
            }
        }
    }
    return sumaNP;
}

int main()
{
    int n, m;
    cin>>n;
    cin>>m;

    int matrix[10][10];

    insertValues(matrix, n, m);

    printMatrix(matrix, n, m);

    int sumaP = sumaParni(matrix, n, m);
    int sumaNP = sumaNeparni(matrix, n, m);

    cout<<"Sumata na parnite elementi e: "<<sumaP<<endl;
    cout<<"Sumata na neparnite elementi e: "<<sumaNP<<endl;

    return 0;
}
