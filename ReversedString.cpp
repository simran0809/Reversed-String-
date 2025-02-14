// String Manipulations
  //Reversing a String
  //Counting vowels in a string 

   // a index 0 , b index 1 , c index 2 , k index 3, l index 4;

   // Create two pointers starting and end pointer and then swapp the character 
// after pointer swapping you can do i ++ and j--
// i will go till it less than j then swap 
#include<iostream>
using namespace std;

class Solution {
 public:
 string reverseString(string s){
    // datatype  functionName(parameter)
    int i = 0;
    int j = s.size()-1;

    while(i<j){
        swap(s[i], s[j]);
        i++;
        j--;
    }
     return s;
 }
};

int main(){
    Solution sol;

    string str; // call parameter and varname
    cout<< "Enter a string :";
    cin>>str;

    cout <<"Reversed string:" <<sol.reverseString(str) << endl;

    return 0;
}



