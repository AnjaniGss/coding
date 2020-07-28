METHOD-1: USING HASH MAP

#include <bits/stdc++.h>
using namespace std;

void makepair(int arr[],int n,int sum){
	unordered_map<int, int> m;
	int i;
	int rem,count;
	for(i=0;i<n;i++){
		rem=sum-arr[i];
		if(m.find(rem)!=m.end()){
			count=m[rem];
			for(int j=0;j<count;j++){
				cout<<" ( "<<arr[i]<<" , "<<rem<<" ) ";
			}
		}
		m[arr[i]]++;
	}
	return ;
}

int main(){
	int n,sum;
	cout<<"enter no. of int ";
	cin>>n;
	int arr[n];
	cout<<"\n";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"enter sum ";
	cin>>sum;
	makepair(arr,n,sum);
}

METHOD-2: BY SORTING AND USING 2 PTRS

/*hasArrayTwoCandidates (A[], ar_size, sum)
Sort the array in non-decreasing order.
Initialize two index variables to find the candidate
elements in the sorted array.
Initialize first to the leftmost index: l = 0
Initialize second the rightmost index: r = ar_size-1
Loop while l < r.
If (A[l] + A[r] == sum) then return 1
Else if( A[l] + A[r] < sum ) then l++
Else r–
No candidates in whole array – return 0
*/

#include <bits/stdc++.h>
using namespace std;

void makepair(int arr[],int n,int sum){
	int l=0;
	int r=n-1;
	sort(arr,arr+n);
	while(l<r){
		if((arr[l]+arr[r])<sum){
			l++;
		}
		else if((arr[l]+arr[r])>sum){
			r--;
		}
		else{
			cout<<" ( "<<arr[l]<<" , "<<arr[r]<<" ) ";
			if(arr[l+1]==arr[l] &&(arr[r-1]!=arr[r]){
				l++;	
			}
			else if(arr[r-1]==arr[r]){
				r--;
			}
			else if((arr[l+1]!=arr[l] )&&(arr[r-1]!=arr[r]))
			{
			l++;
			r--;
			}
		}
	}
	return ;
}

int main(){
	int n,sum;
	cout<<"enter no. of int ";
	cin>>n;
	int arr[n];
	cout<<"\n";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"enter sum ";
	cin>>sum;
	makepair(arr,n,sum);
}
