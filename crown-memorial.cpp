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
      
      else if (i == height - 1) {
                cout << "*";
            }
 
            else if ((j < i || j > height - i) &&
                     (j < height + i || j >= length - i))
                cout << "#";
            else
                cout << " ";
        }
        cout << "\n";
    }
  }


int main()
{
  int length = 25;
 
  int height = (length - 1) / 2;
 
  crown(length, height);
  
  cout << "\nQueen Elizabeth II of the United Kindgom has died. SmashedFrenzy16 Studios have their thoughts with the Royal Family at this tragic moment in time. Long Live King Charles III!\n";
 
  return 0;
}
