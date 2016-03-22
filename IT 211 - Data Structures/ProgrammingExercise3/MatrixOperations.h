#ifndef MATRIX_OPERATIONS_H
#define MATRIX_OPERATIONS_H

void random(int arr[10][10], int row, int col);
bool add(int R1[10][10],int R2[10][10],int r1, int c1, int r2, int c2);
bool subt(int R1[10][10],int R2[10][10],int r1, int c1, int r2, int c2);
void display(int R[10][10], int row, int col);
void scalar(int R[10][10], int row, int col, int sc);
bool multiply(int r1[10][10], int r2[10][10], int ro2, int co1, int ro1, int co2);
void trans(int R[10][10], int x, int y)



#endif