#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;
    //int i=0; 
    while(n>9){
        v.push_back(n%10);
        n/=10;
       // i++;
    }
    cout<<n<<endl;
    vector<int>::iterator it;
    it=v.end();
    it--;

    while(it!=v.begin()){
         cout<<*it<<endl;
        it--;
}
    cout<<*(v.begin());
    return 0;
}
/*/
name: tariq akhlak
prn : 22070123124
exp : print digits.
n0 = 54321
5
4
3
2
1
