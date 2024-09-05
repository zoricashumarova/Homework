#include <iostream>

using namespace std;

/*
7. Напиши програма која од стандарден влез ќе прочита две матрици од природни броеви.
Програмата е потребно да провери дали двете матрици се еднакви. Да се испечати
резултатот од споредбата.
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

bool equalMatrixes(int matrixOne[][10], int n, int m, int matrixTwo[][10], int e, int f) {

    if (n!= e || m != f) {
        return false;
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
           if(matrixOne[i][j] == matrixTwo[i][j]) {
                return true;
           } else {
               return false;
           }
        }
    }
}

int main()
{
    int n, m;
    cin>>n;
    cin>>m;

    int matrixOne[10][10];
    int matrixTwo[10][10];

    insertValues(matrixOne, n, m);
    printMatrix(matrixOne, n, m);

    int e, f;
    cin>>e;
    cin>>f;

    insertValues(matrixTwo, e, f);
    printMatrix(matrixTwo, e, f);

    bool ednakvi = equalMatrixes(matrixOne, n, m ,matrixTwo, e, f);

    if (ednakvi) {
        cout<<"Matricite se ednakvi"<<endl;
    } else {
        cout<<"Matricite ne se ednakvi"<<endl;
    }

    return 0;
}
