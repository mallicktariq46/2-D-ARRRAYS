/*/author: tariq akhlak.
etc : b2.
prn : 124.
/*/
#include<bits/stdc++.h>
using namespace std;
bool f1(bool b1){
    if(b1){
        return true;
    }
else{
 return false;
}
   
}
int main(){
    bool bf;
    cout<<"enter 1 or 0:"<<endl;
    cin>>bf;
    if(f1(bf)){
        cout<<"IMAGE IS COLOURFUL :"<<endl;
    }
    else{
        cout<<"IMAGE IS B/W"<<endl;
    }
    return 0;
}
/*/
if bf==true : 
IMAGE IS COLOURFUL.
else :
IMAGE IS B/W
/*/
