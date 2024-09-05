#include <iostream>

using namespace std;

/*
9. Напиши програма која од стандарден влез ќе прочита матрица од 5-ти ред и да се
определи полузбир од сите вредности деливи со 3 над главна дијагонала и полузбир под
главна дијагонала од сите вредности поголеми од 10. Резултатите да се отпечатат.
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

double halfSumUp(int matrix[][5], int n) {
    int suma = 0;

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (j>i && matrix[i][j] % 3 == 0) {
                suma += matrix[i][j];
            }
        }
    }
    return (suma * 1.0) / 2;
}

double halfSumDown(int matrix[][5], int n) {
    int suma = 0;

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (i>j && matrix[i][j] > 10) {
                suma += matrix[i][j];
            }
        }
    }
    return (suma * 1.0) / 2;
}

int main()
{
    int matrix[5][5];

    insertValues(matrix, 5);
    printMatrix(matrix, 5);

    int poluZbirNad = halfSumUp(matrix, 5);
    int poluZbirPod = halfSumDown(matrix, 5);

    cout << "Poluzbirot nad glavnata dijagonala iznesuva: " << poluZbirNad << endl;
    cout << "Poluzbirot pod glavnata dijagonala iznesuva: " << poluZbirPod << endl;
    return 0;
}
