using namespace std;

/*
10. Напиши програма која од стандарден влез ќе прочита матрица од 5-ти ред и да се
определи аритметичката средина над споредна дијагонала од сите вредности и
аритметичката средина под споредна дијагонала од сите вредности. Резултатите да се
отпечатат.
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

double aritmeticUp(int matrix[][5], int n) {
    int suma = 0;
    int counter = 0;

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (i+j<n-1) {
                suma += matrix[i][j];
                counter++;
            }
        }
    }
    return (suma * 1.0) / counter;
}

double aritmeticDown(int matrix[][5], int n) {
    int suma = 0;
    int counter = 0;

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (i+j>=n) {
                suma += matrix[i][j];
                counter++;
            }
        }
    }
    return (suma * 1.0) / counter;
}

int main()
{
    int matrix[5][5];

    insertValues(matrix, 5);
    printMatrix(matrix, 5);

    int aritmetickaSredinaNad = aritmeticUp(matrix, 5);
    int aritmetickaSredinaPod = aritmeticDown(matrix, 5);

    cout << "Aritmetickata sredina nad glavnata dijagonala iznesuva: " << aritmetickaSredinaNad << endl;
    cout << "Aritmetickata sredina pod glavnata dijagonala iznesuva: " << aritmetickaSredinaPod << endl;
    return 0;
}
