#include <bits/stdc++.h>
// #include <unordered_map>
#include <map>
using namespace std;
int main(){
    string str = "ARUNACHALPRADESH";
    // unordered_map<char, int> freq;
    map<char, int> freq;
    for(int i=0; i<str.length(); i++){
        char ch = str[i];
        freq[ch]++;
    }
    /* for(auto i:freq){
        cout<<i.first<<" "<<i.second<<endl;
    } */

    map<string, int> m; // CREATION

    pair<string, int> p = make_pair("Scorpio", 9); // INSERTION
    m.insert(p);
    pair<string, int> p2("Alto", 2);
    m.insert(p2);
    m["Fortuner"] = 10;

    // ACCESS
    cout<<m.at("Alto")<<endl;
    cout<<m["Fortuner"]<<endl;

    // SEARCH
    cout<<m.count("Scorpio")<<endl;
    cout<<m.count("Toto")<<endl;

    // FIND
    if(m.find("Fortuner") != m.end()){
        cout<<"Fortuner Found"<<endl;
    } else {
        cout<<"Fortuner Not Found"<<endl;
    }

    cout<<m.size()<<endl;

    cout<<m["Hummer"]<<endl;
    cout<<m.size()<<endl;
    return 0;
}