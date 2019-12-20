//NOTE : CHECK THIS ONCE
/*One Away: There are three types of edits that can be performed on strings: insert a character,
remove a character, or replace a character. Given two strings, write a function to check if they are
one edit (or zero edits) away.
EXAMPLE
pale , ple - > tru e
pales , pale - > tru e
pale , bale - > tru e
pale , bale - > fals e 
*/


#include<bits/stdc++.h>
using namespace std;

struct n{
	char c;
	int c1;
	int c2;
}s[26];

bool check(string str1,string str2){
	int l=str1.length()-str2.length();
	if(l>1||l<-1){
		  cout<<"diff in lengths is "<<l<<"so the strings aren't one away \n";
		  return false;
	}
	 
	   
	map<char,int>A;
	map<char,int>B;
	int i,m=0,n=0;
	for(char j='a';j<='z';j++){
		A[j]=0;
		B[j]=0;
	}
	for(i=0;i<str1.length();i++){
		   A[str1[i]]+=1;
	
	}
	for(i=0;i<str2.length();i++){
	
		   B[str2[i]]+=1;
		   
	}

	
	map<char,int>::iterator a;
	map<char,int>::iterator b;
	a=A.begin();
	b=B.begin();
	int count=0;
    for(i=0;i<26;i++){
	
		if(a->second!=b->second&&(a->second==0||b->second==0)){
			count++;
		}
		a++;
		b++;
	}
	//cout<<"count "<<count;
		if(count>2)
		 return false;

	return true;
}
	

int main(){
	string str1,str2;
	cout<<"enter 2 strings ";
	cin>>str1>>str2;
	if(check(str1,str2))
	cout<<"true";
	else
	 cout<<"false";
	return 0;
}
