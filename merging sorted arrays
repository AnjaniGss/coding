
#include <bits/stdc++.h>

using namespace std;

struct interval{
	int s;
	int e;
};

bool comp(interval a,interval b){
	return (a.s>b.s);
}

void merge(interval arr[],int n){
	sort(arr,arr+n,comp);
	int index=0;
	int i;
	for(i=1;i<n;i++){
		if(arr[index].e>=arr[i].s){
			arr[index].s=min(arr[i].s,arr[index].s);
			arr[index].e=max(arr[i].e,arr[index].e);
		}
		else{
			arr[index]=arr[i];
			index++;
		}
	}
	for(i=0;i<=index;i++){
		cout<<arr[i].s<<" "<<arr[i].e;
		cout<<"\n";
	}
}

int main(){
	int n=5;
	int i;
	struct interval arr[n];
	cout<<"enter 5 intervals \n";
	for(i=0;i<n;i++){
		cin>>arr[i].s;
		cin>>arr[i].e;
		cout<<"\n";
	}
	merge(arr,n);
	return 0;
}
