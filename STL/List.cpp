#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    list<int> data;
    cout <<"size before :"<< data.size() << endl;
    data.push_back(100);
    data.push_back(50);
    data.push_front(200);
    auto it = data.begin();
    advance(it,2);
    data.erase(it);
    cout << "size after :"<<data.size() << endl;
    for(auto x:data){
        cout << x << endl;
    }
    
    return 0;
}

