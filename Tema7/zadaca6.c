#include <iostream>

using namespace std;

/*
6. Напиши програма која од стандарден влез ќе прочита број на редици и колони (n <= 10,
m <= 10) што ќе ги содржи една матрица од природни броеви. Од стандарден влез внеси
ги елементите на матрицата.

Програмата е потребно да го провери секој ред и секоја колона од матрицата и да
отпечати дали редот/колоната е строго растечки, строго опаѓачки или ниту строго растечки
ниту строго опаѓачки. Резултатот за секој ред/колона да се отпечати.
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

bool checkRow(int matrix[][10], int n, int m) {
    for (int i=0; i<n-1; i++) {
        for (int j=0; j<m-1; j++) {
            if (matrix[i][j] < matrix[i][j+1]) {
                return true;
            }
        }
    }
    return false;
}

bool checkColumns(int matrix[][10], int n, int m) {
    for (int j=0; j<m; j++) {
        for (int i=0; i<n-1; i++) {
            if (matrix[i][j] > matrix[i+1][j]) {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int n, m;
    cin>>n;
    cin>>m;

    int matrix[10][10];

    insertValues(matrix, n, m);

    printMatrix(matrix, n, m);

    bool rasteckiRed = checkRow(matrix, n, m);

    if (rasteckiRed) {
        cout<<"Redovite vo matricata se strogo rastecki"<<endl;
    } else {
        cout<<"Redovite vo matricata ne se strogo rastecki"<<endl;
    }

    bool rasteckiKoloni = checkColumns(matrix, n, m);

    if (rasteckiKoloni) {
        cout<<"Kolonite vo matricata se strogo rastecki"<<endl;
    } else {
        cout<<"Redovite vo matricata ne se strogo rastecki"<<endl;
    }
    return 0;
}
