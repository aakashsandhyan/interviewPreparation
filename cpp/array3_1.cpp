/**Find the "Kth" min element of an array (merge sort approach) ******/
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<unordered_map>
#include<unordered_set>
#include<queue>
using namespace std;
int a[500000];
void solve(){
	int n;
	cin>>n;
	for(int i = 0; i < n; i++){
	    cin>>a[i];
	}
	sort(a, a + n);
	int k;
	cin>>k;
	cout<<a[k-1]<<"\n";
	
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