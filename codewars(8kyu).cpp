//8 kyu Even or Odd
#include <string>
using namespace std;

string even_or_odd(int number) 
{
   return number % 2 == 0 ? "Even" : "Odd";
}
// 8 kyu Sum of positive
#include <vector>

int positive_sum (const std::vector<int> arr){
  // Your code here
  int sum = 0;
  for(int e : arr){
    if(e >= 0){
      sum += e;
    }else{
      continue;
    }
  }
  return sum;
}
//8 kyu Return Negative
int makeNegative(int num)
{
  return num > 0 ? -num : num;
}
//8 kyu Reversed Strings
#include <string>

using namespace std ; 

string reverseString (string str )
{
  // your Code is Here ... enjoy !!!
  reverse(str.begin() , str.end());
  return str ;
}

// 8 kyuConvert boolean values to strings 'Yes' or 'No'.
#include <string>
using namespace std;
string bool_to_word(bool value)
{
  return value == true ? "Yes" : "No";
}

//8 kyu Opposite number
int opposite(int number) 
{
 return -number;
}

// 8 kyu Convert a Number to a String!
#include <string>
using namespace std;
string number_to_string(int num) {
  // your code here
  return to_string(num);
}

// 8 kyu Remove First and Last Character
#include <string>
using namespace std; 

string sliceString (string str )
{
  // your code is here ... Hope You Enjoy !!
    str.erase(str.begin());
    str.erase(str.end() - 1);
    return str; 
}

// 8 kyu String repeat
#include <string>
using namespace std;
string repeat_str(size_t repeat, const string& str) {
  string repeatstr;
  for(int i = 0; i < repeat;i++){
    repeatstr.append(str);
  }
  return repeatstr;
}

// 8 kyu Square(n) Sum
#include <vector>
using namespace std;
int square_sum(const vector<int>& numbers)
{
    int sum = 0;
    for(int i : numbers){
      sum += i * i;
    }
    return sum;
}

// 8 kyu Remove String Spaces
#include <string>
using namespace std;
string no_space(const string& x)
{ 
   string str;
   for(int i = 0; i < x.size();i++){
     if(x[i] != ' '){
       str += x[i];
     }
   }
   return str;
}

//

