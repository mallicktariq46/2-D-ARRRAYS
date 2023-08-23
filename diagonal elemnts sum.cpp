#include<bits/stdc++.h>
using namespace std;
int main(){
	cout<<"ENTER THE NO OF ROWS AND COLUMNS :"<<endl;
	int a,b;
	cin>>a>>b;
	if(a==b){
		int v[a][b],x=0,l=0,m=0,c=0,rev1=0,rev2=a-1;
		cout<<"ENTER THE MATRIX : "<<endl;
		for(int i=0;i<a;i++){
			for(int j=0;j<b;j++){
				cin>>v[i][j];
				if(i==l && j==m){
					x+=v[i][j];
					l+=1;
					m+=1;
				}
				if(i==rev1 && j==rev2){
					c+=v[i][j];
					rev1+=1;
					rev2-=1;
				}
			}
		}
		cout<<x<<endl;
		cout<<c<<endl;
	}
	else{
		cout<<"NOT POSSIBLE !!!"<<endl;
	}
	return 0;
}
