#include<bits/stdc++.h>
using namespace std;

bool check(string s1,string s2){
	int i,j;
	if(s1.length()!=s2.length())
	   return false;
	sort(s1.begin(),s1.end());
	sort(s2.begin(),s2.end());
	for(i=0;i<s1.length();i++){
		if(s1[i]!=s2[i])
		  return false;
	}
	return true;
    	
}
int main(){
	string s1,s2;
	cout<<"enter first string \n";
	cin>>s1;
	cout<<"enter second string \n";
	cin>>s2;
	if(check(s1,s2))
	  cout<<"the strings "<<s1<<" and "<<s2<<" are  permutations of eachother ";
    else
      cout<<"the strings "<<s1<<" and "<<s2<<" are not  permutations of eachother ";
    return 0;
	
}

