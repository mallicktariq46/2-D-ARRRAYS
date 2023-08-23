/*/
   AUTHOR :: mallicktariq
   DATE : 8 AUGUST 2023
   TIME : 3:34 PM
   /*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	cout<<"ENTER THE NO OF ROWS AND COLUMNS IN MATRIX 1 :"<<endl;
	int  a,b,c,d;
	cin>>a>>b;
	cout<<"ENTER THE NO OF ROWS AND COLUMNS IN MATRIX 2 :"<<endl;
	cin>>c>>d;
	if(a!=d || c!=b){
		cout<<"NO"<<endl;
		return 0;
	}
	int v1[a][b],v2[c][d];
	cout<<"ENTER MATRIX 1 :"<<endl;
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			cin>>v1[i][j];
		}
	}
	cout<<"ENTER MATRIX 2 :"<<endl;
		for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			cin>>v2[i][j];
		}
	}
	vector<int>v;
	long long x=0;
	for(int i=0;i<d;i++){
		for(int j=0;j<c;j++){
			x+=v2[i][j];
		}
		v.push_back(x);
		x=0;
	}
	int l=0;
	cout<<endl<<endl;
	for(int i=0;i<a;i++){
		for(int j=0;j<d;j++){
			cout<<v1[i][j]*v[l]<<" ";
			l++;
		}
		cout<<endl;
		l=0;
	}
	return 0;
}
