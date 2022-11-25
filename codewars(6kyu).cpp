//6 kyu Multiples of 3 or 5
int solution(int number) 
{
  int sum = 0;
  for(auto i = 0; i < number; i++){
    if(i % 3 == 0 || i % 5 == 0){
       sum += i;
    }
  }return sum;
}

//6 kyu Find the odd int
#include <vector>
using namespace std;
int findOdd(const vector<int>& numbers){
  //your code here
  for(int i = 0; i < numbers.size();i++){
    
    int count = 0;
    
    for(int j = 0; j < numbers.size();j++){
      
      if(numbers[i] == numbers[j]){
        
        count++;
      }
      }
      if(count % 2 != 0){
        
        return numbers[i];
      }
      
   
  }return -1;
}


//6 kyu Sum of Digits / Digital Root
using namespace std;
int digital_root(int n)
{
    // ...
  string num = to_string(n);
    if (num.compare("0") == 0){
        return 0; // 0 
  }
    int ans = 0;
    for (int i=0; i<num.size(); i++){
        ans = (ans + num[i]-'0') % 9;
      cout << ans;
    }
    return (ans == 0)? 9 : ans; 
  
}

// 6 kyu Who likes it?
using namespace std;
string likes(const vector<string> &names)
{
    return names.size() == 0 ? "no one likes this" : names.size() == 1 ? names[0] + " likes this" :
    names.size() == 2 ? names[0] + " and " +  names[1] + " like this" : names.size() == 3 ? 
    names[0] + ", " +  names[1] + " and " + names[2] + " like this" :
    names[0] + ", " +  names[1] + " and " + to_string(names.size() - 2) + " others " + "like this"; // Do your magic!
}

// 6 kyu Create Phone Number
#include <string>
using namespace std;
string createPhoneNumber(const int arr [10]){
  //your code here
  return "(" + to_string(arr[0]) + to_string(arr[1]) + to_string(arr[2]) + ") " 
    + to_string(arr[3]) + to_string(arr [4]) + to_string(arr[5]) + "-"
    + to_string(arr[6]) + to_string(arr[7]) + to_string(arr[8]) + to_string(arr[9]);
}

// 6 kyu Bit Counting
unsigned int countBits(unsigned long long n){
  //your code here
  int c = 0;
  while(n > 0){
    c += n % 2;
    n = n / 2;
  }
  return c;
}

//6 kyu Find The Parity Outlier
#include <vector>
using namespace std;
int FindOutlier(vector<int> arr)
{
    vector<int>odd;
   vector<int>even;
  for(auto i : arr){
    if(i % 2 == 0){
      even.push_back(i);
    }else{
      odd.push_back(i);
    }
  }
   return odd.size() > even.size() ? even[0] : odd[0];
}

//





