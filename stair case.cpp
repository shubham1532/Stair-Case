#include<bits/stdc++.h>
using namespace std;
void stair(int a[][1000],int key,int m,int n){
 int row=0,col=n-1;
  while(key!=a[row][col] && row<m&&col>=0){

	if(a[row][col]>key){
		col--;
	}
	if(a[row][col]<key){
		row++;
	}
	if(a[row][col]==key){
		cout<<"1"<<endl;
		break;
	}	
	if(row>=m||col<0){
		cout<<"0"<<endl;
		break;
	}
  }
} 

int main(){
	int m,n;
	//cout<<"matrices dimension="<<endl;
	cin>>m>>n;
	int key;
	//cout<<"enter searching key="<<endl;
	
	//cout<<"enter starting value(0,0) of matrices= "<<endl;
	int a[1000][1000];
	for(int row=0;row<=m-1;row++){
		for(int col=0;col<=n-1;col++){
			cin>>a[row][col];
		}
	}
	cin>>key;
	int val;
	stair(a,key,m,n);

	return 0;
