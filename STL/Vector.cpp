#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    // int marks[10] = {20,15,45};
   vector<int> marks = {20,55,25};
   marks.push_back(26);
   marks.push_back(60);
   marks.pop_back();
   cout << marks.size()<<endl;
   for(int i=0;i<marks.size();i++){
    cout<< marks[i]<< endl;
   }
   

    return 0;
}
