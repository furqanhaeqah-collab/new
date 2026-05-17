// Libraries used
#include <iostream>
using namespace std;

// Function prototype
void inputArray(int arrayA[][100], int arrayB[][100], int m, int n, int p);
void addMatrics(int arrayA[][100], int arrayB[][100], int result[][100], int m, int n, int p);
void printArray(int result[][100], int m, int n, int p);

// Main Function
main()
{
    cout << "Enter size of row of 1st array: ";
    int m;
    cin >> m;
    cout << "Enter size of col of 1st array: ";
    int n;
    cin >> n;
    cout << "Enter size of col of 2nd array: ";
    int p;
    cin >> p;
    int arrayA[n][100];
    int arrayB[n][100];
    int result[n][100];
    inputArray(arrayA, arrayB, m, n, p);
    addMatrics(arrayA, arrayB, result, m, n, p);
    printArray(result, m, n, p);
}

// Function used
void inputArray(int arrayA[][100], int arrayB[][100], int m, int n, int p)
{
    cout << "Enter the elements of 1st array: ";
    for (int row = 0; row < m; row++)
    {
        for (int col = 0; col < n; col++)
        {
            cin >> arrayA[row][col];
        }
    }
    cout << "Enter the elements of 2nd array: ";
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < p; col++)
        {
            cin >> arrayB[row][col];
        }
    }
}
void addMatrics(int arrayA[][100], int arrayB[][100], int result[][100], int m, int n, int p)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                result[i][j] = result[i][j] + (arrayA[i][k] * arrayB[k][j]);
            }
        }
    }
}
void printArray(int result[][100], int m, int n, int p)
{
    cout << "Result array: " << endl;
    for (int row = 0; row < m; row++)
    {
        for (int col = 0; col < p; col++)
        {
            cout << result[row][col] << " ";
        }
        cout << endl;
    }
}