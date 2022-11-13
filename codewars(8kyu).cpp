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

//8 kyu Grasshopper - Summation
using namespace std;
int summation(int num){
 //Code Here
  int sum = 0;
  for(int i = 0; i <= num; i++){
    sum += i;
  }
  return sum;
}

// 8 kyu Find the smallest integer in the array
#include <vector>

using namespace std; 

int findSmallest(vector <int> list)
{
   // Your Code is Here ... Hope you Enjoy 
  sort(list.begin(), list.end());
  return list[0];
  
}

// 8 kyu Counting sheep...
#include <vector>

using namespace std; 

int count_sheep(vector<bool> arr) 
{
  int counter = 0;
  for(auto i : arr){
    if(i == true){
      counter += 1;
    }
  }return counter;
}

// 8 kyu Century From Year
int centuryFromYear(int year) 
{
return year % 100 == 0 ? year / 100 : year / 100 + 1;
}

// 8 kyu Basic Mathematical Operations
int basicOp(char op, int val1, int val2) {
  // Your code here
  switch(op){
      case '+': return val1 + val2;
        break;
      case '-': return val1 - val2;
        break;
      case '*': return val1 * val2;
        break;
       case '/': return val1 / val2;
        break;
  }
}

// 8 kyu Abbreviate a Two Word Name
#include <string>
using namespace std;
string abbrevName(string name)
{
  string str = "";
  str += toupper(name[0]);
  str += ".";
  str += toupper(name[name.find(' ') + 1]); 
  return str;
}

// 8 kyu Is n divisible by x and y?
bool isDivisible(int n, int x, int y) {
  // your code here
  return n % x == 0  && n % y == 0 ? true : false;
}

// 8 kyu Keep Hydrated!
int litres(double time) {
    return time / 2;
}

// 8 kyu Convert a String to a Number!
#include <string>

int string_to_number(const std::string& s) {
  //your code here
  int num = stoi(s);
  return num;
}

// 8 kyu Beginner - Lost Without a Map
using namespace std;
vector<int> maps(const vector<int> & values) {
  vector<int> val;
  for(auto i : values){
    val.push_back(i * 2);
  }
  return val;
}

// 8 kyu Returning Strings
#include <string>
using namespace std;
string greet(const string& n){
  //your code here
  string name = "Hello, ";
  name += n;
  name +=  " how are you doing today?";
  return name;
}

// 8 kyu Count of positives / sum of negatives
#include <vector>
using namespace std;
vector<int> countPositivesSumNegatives(vector<int> input)
{
    // go for it!
  vector<int>v;
  int count = 0;
  int negative = 0;
  for(auto i : input){
    if(i > 0){
       count++;
    }else{
      negative += i;
    }
  }
  if(!input.empty()){
 v.push_back(count);
  v.push_back(negative);
  }
   return v;
  }

//8 kyu Opposites Attract
bool lovefunc(int f1, int f2) {
  return f1 % 2 == 0 && f2 % 2 == 1 || f1 % 2 == 1 && f2 % 2 == 0 ;
}

// 8 kyu Convert a Boolean to a String
#include <string>

std::string boolean_to_string(bool b){
  //Your code here
  return b ? "true" : "false";
}

// 8 kyu Beginner Series #1 School Paperwork
int paperwork(int n, int m){
    return n < 0 || m < 0 ? 0 : n * m; 
}

// 8 kyu Invert values
#include <vector>
using namespace std;
vector<int> invert(vector<int> values)
{
  vector<int> val;
   for(auto i : values){
      val.push_back(-i);
   }
    return val;
}

// 8 kyu Calculate average
#include <vector>

double calcAverage(const std::vector<int>& values){
  // your code
  double sum = 0;
  for(auto i: values){
     if(values.empty()){
       return 0;
     } else{
        sum += i;
     }
  }return sum / values.size();
}

// 8 kyu How good are you really?
#include <vector>
using namespace std;
bool betterThanAverage(vector<int> classPoints, int yourPoints) {
  // your code here
   double sum = 0.0;
  for(auto i : classPoints){
    sum += i;
  }
   return (sum / classPoints.size()) < yourPoints;
}

// 8 kyu Reversed sequence
using namespace std;
vector<int> reverseSeq(int n) {
  //your code here
  vector<int> reverseSeq;
  for(auto i = n; i > 0; i--){
     reverseSeq.push_back(i);
  }
  return reverseSeq;
}

// 8 kyu Sum Arrays
#include <vector>
using namespace std;
int sum(vector<int> nums) {
  // your code here
  double sum = 0.0;
  if(nums.empty()){
    return 0;
  }
  else{
    for(auto i : nums){
      sum += i;
    }
  }
  return sum;
}

// 8 kyu Beginner - Reduce but Grow
#include <vector>
int grow(std::vector<int> nums) {
  // your code here
  int s = 1;
  for(auto i : nums){
     s *= i;
  }
  return s;
}

// 











