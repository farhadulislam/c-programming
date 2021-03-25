#include <iostream>
using namespace std;

int add (int x, int y){
  return (x+y);
}

int main() {
    /*cout << "Hello\t you\n\nWhy\t do you look\t like that?\n";
    cout << "Hello\v you\n\nWhy\v do you look\v like that?\n";
    cout << "Hello\b you\n\nWhy\b do you look\b like that?\n";
    cout << "Hello\r you\n\nWhy\r do you look\r like that?\n";
    cout << "Hello\f you\n\nWhy\f do you look\f like that?\n";
    cout << "Hello\a you\n\nWhy\a do you look\a like that?\n";
    */

    int answer = add(34,35);
    cout <<"The answer is : \v" << answer<<endl;

    int i = 7;
      
      unsigned int j = i; // from int to unsigned int
      short int k = i; // from int to short
      double x = i; // from int to double
      cout << i << " " << j << " " << k << " " << x << endl;

    return 0;
}
