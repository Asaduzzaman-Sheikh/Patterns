#include<bits/stdc++.h>
using namespace std;

void pattern1(int n){
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      cout << "* ";
    }
    cout << endl;
  }
}
void pattern2(int n){
  for(int i=0; i<n; i++){
    for(int j=0; j<=i; j++){
      cout << "* ";
    }
    cout << endl;
  }
}
void pattern3(int n){
  for(int i=1; i<=n; i++){
    for(int j=1; j<=i; j++){
      cout << j << " ";
    }
    cout << endl;
  }
}
void pattren4(int n){
  for(int i=1; i<=n; i++){
    for(int j=1; j<=i; j++){
      cout << i << " ";
    }
    cout << endl;
  }
}
void pattern5(int n){
  for(int i=0; i<n; i++){
    for(int j=0; j<=n-i-1; j++){
      cout << "* ";
    }
    cout << endl;

  }
}
void pattern6(int n){
  for(int i=1; i<=n; i++){
    for(int j=1; j<=n-i+1; j++){
      cout << j << " ";
    }
    cout << endl;

  }
}
void pattern7(int n){
  for(int i=0; i<n; i++){
    //first inner loop works for left side space...
    for(int j=0; j<n-i-1; j++){
      cout << " ";
    }
    //second inner loop works for pattern...
    for(int j=0; j<2*i+1; j++){
      cout << "*";
    }
    //third inner loop works for right side space...
    for(int j=0; j<n-i-1; j++){
      cout << " ";
    }
    cout << endl;
  }
}
void pattern8(int n){
  for(int i=0; i<n; i++){
    //first inner loop works for left side space...
    for(int j=0; j<i; j++){
      cout << " ";
    }
    //second inner loop works for pattern...
    for(int j=0; j<2*n-(2*i+1); j++){
      cout << "*";
    }
    //third inner loop works for right side space...
    for(int j=0; j<i; j++){
      cout << " ";
    }
    cout << endl;
  }
}
int main(){
  int test;
  cout << "How many tests? :";
  cin >> test;
  for(int i=0; i<test; i++){
    int n;//size of the pattern
    cin >> n;
    pattern1(n);

  }
}

