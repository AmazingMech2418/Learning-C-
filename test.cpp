#include <iostream>
#include <string>
using namespace std;

string txt;
int main()
{
  while (true) {
    cout << "Type something. ";
    cin >> txt;
    cout << "You typed '" << txt << "'";
  }
  return 0;
}
