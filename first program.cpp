/*/
 AUTHOR : mallicktariq
 DATE : 8 AUGUST 2023
 TIME : 3 : 40 PM
 /*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	cout<<"ENTER THE NO OF ROWS AND COLUMNS :"<<endl;
	int a,b;
	cin>>a>>b;
	cout<<"ENTER THE MATRIX : "<<endl;
	int v[a][b];
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			cin>>v[i][j];
		}
	}
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
