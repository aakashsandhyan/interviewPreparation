/******** Sort an arrays of 0s,1s and 2s  ****/
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<unordered_map>
#include<unordered_set>
using namespace std;
short a[1000000];
void printArray(int);
void swap(int, int);
void solve(){
	int n;
	cin>>n;
	for(int i = 0; i < n; i++){
		cin>>a[i];
	}
	int zero = 0;
	int two = n - 1;
	for(int i = 0; i < n; i++){
		if(a[i] == 0){
			swap(i,zero);
			zero++;
		}
		else if(a[i] == 2 and i < two){
			swap(i, two);
			two--;
			i--;  //account for swapping a 2 from end to beginning. 
		}
	}
	printArray(n);
}
void swap(int x, int y){
	int temp = a[x];
	a[x] = a[y];
	a[y] = temp;
}
void printArray(int n){
	for(int i = 0; i < n; i++)
		cout<<a[i]<<" ";
	cout<<"\n";
}
int main(){
	//to do
	int t,n;
	scanf("%i", &t);
	while(t--){
		solve();
	}
	return 0;
}