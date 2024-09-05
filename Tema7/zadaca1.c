#include <iostream>

using namespace std;

/*
1. Напиши ги следните функции:

a. Функција преку која ќе може да се внеси матрица од n x m елементи
(n<10, m<10)

b. Функција која ќе отпечати дадена матрица.

c. Функција која ќе ја пронајде максималната вредност во дадена матрица и
ќе ја отпечати вредноста и позицијата на елементот

d. Функција која ќе ја пронајде минималната вредност во дадена матрица и
ќе ја отпечати вредноста и позицијата на

e. Функција која за дадена матрица ќе ја пронајди сумата на сите броеви во
матрицата. Отпечати ја вратената вредност од функцијата.

f. Функција која за дадена матрица ќе ја пронајди просечната вредност на
сите броеви во матрицата. Отпечати ја вратената вредност од функцијата.

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

void maxValue(int matrix[][10], int n, int m) {
    int maximum = matrix[0][0];
    int maxPozicijaRedica = 0;
    int maxPozicijaKolona = 0;

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++)
        if (matrix[i][j] > maximum) {
                maximum = matrix[i][j];
                maxPozicijaRedica = i;
                maxPozicijaKolona = j;
            }
        }
        cout<<"Max element vo matricata e: "<<maximum<<"na pozicija "<<maxPozicijaRedica<<" "<<maxPozicijaKolona<<endl;
    }

void minValue(int matrix[][10], int n, int m) {
    int minimum = matrix[0][0];
    int minPozicijaRedica = 0;
    int minPozicijaKolona = 0;

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (matrix[i][j] < minimum) {
                minimum = matrix[i][j];
                minPozicijaRedica = i;
                minPozicijaKolona = j;
            }
        }
    }
    cout<<"Min element vo matricata e: "<<minimum<<"na pozicija "<<minPozicijaRedica<<" "<<minPozicijaKolona<<endl;
}

int sumMatrix(int matrix[][10], int n, int m) {
    int sum = 0;

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            sum += matrix[i][j];
        }
    }
    return sum;
}

double prosek(int matrix[][10], int n, int m) {
    int sum = 0;

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            sum += matrix[i][j];
        }
    }
    return (sum * 1.0 / 2);
}

int main()
{
    int n, m;
    cin>>n;
    cin>>m;

    int matrix[10][10];

    insertValues(matrix, n, m);

    printMatrix(matrix, n, m);

    maxValue(matrix, n, m);

    minValue(matrix, n, m);

    int sum = sumMatrix(matrix, n, m);

    cout<<"Sumata e: "<<sum<<endl;

    double prosecnaVrednost = prosek(matrix, n, m);

    cout<<"Prosekot e: "<<prosecnaVrednost<<endl;

    return 0;
}
