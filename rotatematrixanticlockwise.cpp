#include<bits/stdc++.h>

using namespace std;

void rotate(int matrix[][3]) {
  int n = 3;

  /* Finding transpose*/
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      int temp = matrix[i][j];
      matrix[i][j] = matrix[j][i];
      matrix[j][i] = temp;
    }
  }

  /* Reverse every column */
  int ind = n - 1;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n / 2; j++) {
      int temp = matrix[j][i];
      matrix[j][i] = matrix[ind][i];
      matrix[ind][i] = temp;
      ind--;
    }
    ind = n - 1;
  }

  //Printing array after rotation
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }
}
int main() {
  int matrix[][3] = {{1,2,3},{4,5,6},{7,8,9}};

  rotate(matrix);

}