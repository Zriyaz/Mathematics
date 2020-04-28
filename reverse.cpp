#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  string str;
  int n;
  cin>>str;
  cin>>n;
  //cout<<size(str);
  if(size(str)>n){
  reverse(str.begin(),str.begin()+n);
  cout<<str;
  }
  return 0;
}