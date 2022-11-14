// 7 kyu Vowel Count
#include <string>

using namespace std;

int getCount(const string& inputStr){
  int num_vowels = 0;
  //your code here
  for(int i : inputStr ){
  if(i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u'){
    num_vowels++;
  }
    }
  return num_vowels;
}

// 7 kyu Disemvowel Trolls
# include <string>
using namespace std;
string disemvowel(const string& str) {
    // return
  string s = "";
  for(auto i : str){
    if(i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u'|| i == 'A' || i == 'E' || i == 'I' || i == 'O' || i == 'U'){
      s += "";
    }else{
      s += i;
    }
  }return s;
}

// 

