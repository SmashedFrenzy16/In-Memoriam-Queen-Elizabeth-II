#include <bits/stdc++.h>

using namespace std;

void crown(int length, int height) {
  for (int i = 0; i < height; i++) {
    for (int j = 0; j < length; j++) {
      if (i == 0) {
        
        if (j == 0 || j == height || j == length - 1) {
                    cout << "*";
                }
                else {
                    cout << " ";
                }
      
      }
      
      else if (i == height - 1) {
                cout << "-";
            }
    }
  }
}

int main()
{
}
