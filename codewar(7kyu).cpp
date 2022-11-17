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

// 7 kyu Get the Middle Character
using namespace std;
string get_middle(string input) 
{
  // return the middle character(s)
  string x = "";
  if(input.size() % 2 == 0){
    x += input[(input.size() / 2) - 1];
    x += input[input.size() / 2];
  }else{
    x += input[(input.size() / 2)];
  }
  return x;
}

// 7 kyu You're a square!
#include <cmath>
bool is_square(int n)
{
  // TODO
  return (double) sqrt(n) - (int) sqrt(n) == 0;
}

//7 kyu Exes and Ohs
using namespace std;
bool XO(const string& str)
{
    int x = 0;
    int o = 0;
    // your c
    for (auto i : str) {
        if (i == 'x' || i == 'X') {
            x++;
        }
        else if (i == 'o' || i == 'O') {
            o++;
        }
    }
    return o == x;
}

// 7 kyu Complementary DNA
#include <string>
using namespace std;
string DNAStrand(const string& dna)
{
  //your code here
  string dna1 = "";
  for(auto i : dna){
    switch(i){
        case 'A': dna1 += 'T';
        break;
        case 'T': dna1 += 'A';
        break;
        case 'G': dna1 += 'C';
        break;
        case 'C': dna1 += 'G';
        break;
    }
  }
  return dna1;
}

// 7 kyu Sum of two lowest positive integers
#include <vector>
using namespace std;
long sumTwoSmallestNumbers(vector<int> numbers)
{
    sort(numbers.begin() , numbers.end());
  return numbers[0] + numbers[1]; 
}

// 7 kyu Beginner Series #3 Sum of Numbers
int get_sum(int a, int b)
{
  //Good luck!
  int s = 0;
  if(a == b){
    return a;
  }else if(b > a){
    for(int i = a; i <= b; i++){
      s += i; 
    }
    return s;
  }else if(a > b){
    for(int i = b; i <= a; i++){
      s += i; 
    }
    return s;
  }
}

// 7 kyu Find the next perfect square!
#include <cmath>
long int findNextSquare(long int sq) {
  // Return the next square if sq if a perfect square, -1 otherwise
  if((double) sqrt(sq) == (int) sqrt(sq)){
    return (sqrt(sq) + 1) * (sqrt(sq) + 1);
  }else{
  return -1;
}
}

// 7 kyu Is this a triangle?
namespace Triangle
{
  bool isTriangle(int a, int b, int c)
  {
    return (long) a + b > c && (long) a + c > b && (long) b + c > a;
  }
};

// 7 kyu Sum of odd numbers
long long rowSumOddNumbers(unsigned n){
  //your code here
  return (long long) n * n * n;
}

// 7 kyu Odd or Even?
#include <string>
#include <vector>
using namespace std;
string odd_or_even(const vector<int> &arr)
{
    int s = 0;
  for(auto i : arr){
    s += i;
  }return s % 2 == 0 ? "even" : "odd";
}

//7 kyu Find the stray number
int stray(std::vector<int> numbers) {
    for(auto i = 0; i < numbers.size(); i++){
       if(numbers[i] != numbers[i + 1]){
         if(numbers[0] != numbers[1]){
           return numbers[0];
         }
         return numbers[i + 1];
       }
    }
};

//7 kyu Count the divisors of a number
int divisors(int n){  
   int s = 0;
  for(auto i = n; i >= 1; i--){
    if(n % i == 0){
      s++;
    }
  }return s;
}

//7 kyu Breaking chocolate problem
int break_chocolate(int n, int m){
  return n * m - 1 <= 0 ? 0 : n*m-1;
}

// 






