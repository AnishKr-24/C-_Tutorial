

#include <iostream>
#include <string>
using namespace std;
int main() {
  string str ;
  cout<<"Enter the Name : ";
  getline(cin,str);
  int count = 0;
  int i = 0;

  while (str[i] != '\0') {
    if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') 
    //ey consonent ke logic if (str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U' && str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u') 
    {
        count++;
    }
    i++;
  }
  cout<<"Number of Vowel : "<<count;
  return 0;
}