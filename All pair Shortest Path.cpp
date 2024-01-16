#include <iostream>
#define nV 3

using namespace std;

int main()
{
      int matrix[nV][nV], i, j, k;

    for (int i=0; i<nV; i++) {
        for(int j=0; j<nV; j++) {
            cin>> matrix[i][j];
        }
    }
      for (k = 0; k < nV; k++) {
        for (i = 0; i < nV; i++) {
          for (j = 0; j < nV; j++) {
            if (matrix[i][k] + matrix[k][j] < matrix[i][j])
              matrix[i][j] = matrix[i][k] + matrix[k][j];
          }
    }
    cout<< "Array no : "<< k+1 << "\n";
    for (int i = 0; i < nV; i++) {
        for (int j = 0; j < nV; j++) {
                cout <<matrix[i][j] << " ";
  }
  cout << "\n";

    }
}
return 0;
}
