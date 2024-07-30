#include<iostream>
using namespace std;

bool palindrome(string one){
    int left =0;
    int right = one.length()-1;
    while(left<=right){
        if(one[left]!=one[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;
}



int main(){
    string one = "madam";
    if(palindrome(one)){
        cout<<"this string is palindrome";
    }
    else{
        cout<<"this is not palindrome";
    }

}