// Q1. Write a function to print squares of first n natural numbers, taking n as argument to the function.
#include<iostream>
using namespace std;
int sqr(int x){
    int a;
    for(int i =1;i<=x;i++){
    a = i*i;
    cout<<a<<endl;}
  
}
int main(){
    int n;
    cout<<" enter the number : ";
    cin>>n;
    sqr(n);
}

// Q2. Write a function that takes the radius of a circle as an argument and returns its area.
#include<iostream>
using namespace std;
int area(int x){
    float a;
    a = 3.14*x*x;
    cout<<a<<endl;
}

int main(){
    int r;
    cout<<"enter the radius : ";
    cin>>r;
    area(r);
}

// Q3. Given two numbers a and b, write a function to print all odd numbers between them.
#include<iostream>
using namespace std;
int odd(int x,int y){
    int a;
    for(int i =x;i<=y;i++){
    if(i%2!=0) cout<<i<<endl;}
}
int main(){
    int a,b;
    cout<<"enter the 1 number : ";
    cin>>a;
    cout<<"enter the 2 number : ";
    cin>>b;
    odd(a,b);
}

// // Q4. Write a function to count the number of digits in a number and then print the square of this number.
#include<iostream>
using namespace std;
int digit(int x){
    int a;
    a=0;
    while(x>0){
        x/=10;
        a+=1;
    }
    return a;
}
int sqr(int y){
    int b;
    b = y*y;
    return b;
  }
  int main(){
    int n,num;
    cout<<"enter the number : ";
    cin>>n;
    cout<<"the number of digits is : "<<(num = digit(n))<<endl;
     cout<<" the square of this number is : "<<sqr(num);
}

// Q5. The minimum number of functions present in any C++ program is:
// Ans) 1

// Q6: State True and False:
// 1. A Function may be called more than once from any other is_function
// 2. Is is necessary for a function to return some value.
// Ans 1) T
// Ans 2) F

// Q7: Explore: Can the same function name be used for different functions without any conflict?
// Ans) yes
