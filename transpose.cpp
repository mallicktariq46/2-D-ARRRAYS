/*/
  AUTHOR :mallicktariq
  DATE : 11 AUGUST 2023
  TIME : 4 :03 PM
  /*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	cout<<"ENTER THE NO OF ROWS AND COLUMNS IN THE MATRIX :"<<endl;
	int a,b;
	cin>>a>>b;
	int v[a][b];
	cout<<"ENTER THE MATRIX ELEMENTS :"<<endl;
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			cin>>v[i][j];
		}
	}
	cout<<endl<<endl;
	for(int i=b-1;i>=0;i--){
		for(int j=0;j<a;j++){
			cout<<v[j][i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
