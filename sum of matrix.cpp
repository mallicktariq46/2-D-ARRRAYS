/*/
 AUTHOR : mallicktariq
 DATE : 11 AUGUST 2023
 TIME : 4 : 04 PM
 /*/
 #include<bits/stdc++.h>
 using namespace std;
 int main(){
 	cout<<"ENTER THE NO OF ROWS AND COLUMNS :"<<endl;
 	int  a,b;
 	cin>>a>>b;
 	int v[a][b];
 	cout<<"ENTER MATRIX 1 :"<<endl;
 	for(int i=0;i<a;i++){
 		for(int j=0;j<b;j++){
 			cin>>v[i][j];
		 }
	 }
	 int x;
	 cout<<"ENTER MATRIX 2 :"<<endl;
	 for(int i=0;i<a;i++){
 		for(int j=0;j<b;j++){
 			cin>>x;
 			v[i][j]+=x;
		 }
	 }
	 cout<<"RESULT :"<<endl;
	 for(int i=0;i<a;i++){
 		for(int j=0;j<b;j++){
 			cout<<v[i][j]<<" ";
		 }
		 cout<<endl;
	 }
	 
 	return 0;
 }
