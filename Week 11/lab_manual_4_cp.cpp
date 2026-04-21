#include<iostream>
using namespace std;

// Function prototype
int printSum(int matrix[][3],int row_size);

// Main Function
main(){
    cout<<"Enter row size: ";
    int row_size;
    cin>>row_size;
    int matrix[row_size][3];
    for(int row =0;row<row_size;row++){
        for(int col =0;col<3;col++){
            cout<<"Enter elements at position ["<<row<<"]["<<col<<"]: ";
            cin>>matrix[row][col];
        }
    }
    int result = printSum(matrix,row_size);
    cout<<"The sum of elements in the matrix is: "<<result;
}

// printSum Function
int printSum(int matrix[][3],int row_size){
    int sum = 0;
    for(int row = 0;row<row_size;row++){
        for(int col = 0;col<3;col++){
            sum = sum+matrix[row][col];
        }
    }
    return sum;
}
