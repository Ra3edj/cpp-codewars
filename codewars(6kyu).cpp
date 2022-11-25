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

// 



