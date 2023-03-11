#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution
{
public:
   vector<string> letterCombinations(string digits) {
        if (digits.size() == 0) {
            return result;
        }
        search(digits,0);
        return result;
    }

private:
   vector<string> result;
   string s;
   const string numMap[10]={
     "", 
    "", 
    "abc", 
    "def", 
    "ghi", 
    "jkl", 
    "mno", 
    "pqrs",
    "tuv", 
    "wxyz",
   };

   void search(const string& digits,int index){
        if(index==digits.size()){
            result.push_back(s);
            return ;
        }
         int num = digits[index] - '0';        
        string letters = numMap[num];  
        for(int i=0;i<letters.size();i++){
            s.push_back(letters[i]);
            search(digits,index+1);
            s.pop_back();
        }

        
   }
};
