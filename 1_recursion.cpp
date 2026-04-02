#include<iostream>
using namespace std;
int count=0;

void print(int num){
    if(num==0){
        return;
    }
    cout<<count<<" "<<endl;
    count++;
    print(num-1);
    cout<<num<<endl;   // recursion use stack memory therefore this line is in stack 
}

int printSum(int n){
    if(n==0){
        return 0;
    }
    return n + printSum(n-1);
}

void reverseArray(int arr[],int left,int right){
    if(left>right){
        return;
    }
    swap(arr[left],arr[right]);
    reverseArray(arr,left+1,right-1);
}

void reverse(int arr[], int n){
    if(n<=1){
        return;
    }
    swap(arr[0],arr[n-1]);
    reverse(arr+1,n-2);  // arr is pointer
}

bool palindrome(string &s,int i){
    if(i>s.size()/2){
        return true;
    }
    if(s[i]!=s[s.size()-i-1]){
        return false;
    }
    return palindrome(s,i+1);
}

// 0 1 1 2 3 5 8 13 21 34

int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fib(n-1)+fib(n-2); // recursion tree is made...
}

int main()
{
    int n=5;
    cout<<fib(n);
    return 0;
}