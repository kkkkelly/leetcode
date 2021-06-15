
/*
leetcode_9
Given an integer x, return true if x is palindrome integer.
An integer is a palindrome when it reads the same backward as forward.
For ex, 121 is palindrome while 123 is not.
*/
#include <stdio.h>
#include<iostream>

using namespace std;

bool isPalindrome(int);

int main()
{
  long int x=1 ;
  bool sol;
  cout<<"Enter a number: ";
  cin>>x;

  sol = isPalindrome(x);
  cout<<boolalpha<<sol<<endl;
  return 0;

}

bool isPalindrome(int x) {
    long int reverse=0, rem,n=x;
    if(x<0){
        return false;
    }else{
        while(n!=0){
            rem=n%10;
            reverse=reverse*10+rem;
            n/=10;
        }
        if(reverse==x){
            return true;
        }
        return false;
    }
}
/*
code on leetcode
class Solution {
public:
    bool isPalindrome(int x) {
        long int reverse=0, rem,n=x;
        if(x<0){
            return false;
        }else{
            while(n!=0){
                rem=n%10;
                reverse=reverse*10+rem;
                n/=10;
            }
            if(reverse==x){
                return true;
            }
            return false;
        }

    }
};
*/
