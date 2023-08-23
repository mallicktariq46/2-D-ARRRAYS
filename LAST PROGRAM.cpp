/*/
   AUTHOR :mallicktariq
   DATE : 8 AUGUST 2023
   TIME : 3 : 37 PM
   /*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,count=0,x;
	cout<<"enter size :"<<endl;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++)cin>>v[i];
	cout<<"ENTER THE ELEMENTS :"<<endl;
	for(int i=0;i<n;i++){
		cin>>x;
		if(x!=v[i]){
			count++;
		}
	}
	if(count==0){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"YES"<<endl;
	}
	return 0;
}
