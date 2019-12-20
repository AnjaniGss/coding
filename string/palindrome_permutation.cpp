//checking if a string can be rearranged to form a palindrome
//I'm not sure abt this...check it once
#include<bits/stdc++.h>
using namespace std;

bool perm(string str){
	map<char,int> m;
	int i;
	
	//mapping char in strings with its count
	//if there's a space then ignore it
	for(i=0;i<str.length();i++){
		if(str[i]!=' '){
		if(!m[str[i]]){
			m[str[i]]=1;
		}
		else
		   m[str[i]]++;
	   }
	   else 
	     continue;
	}
	
	map<char,int>::iterator k;
	int count=0;
	for(k=m.begin();k!=m.end();k++){
		cout<<k->first<<" -> "<<k->second<<"\n";
		if(k->second%2==1){
		  count++;
		}
	}
    //there can be at max one char with odd count else it'll not be a palindrome
	if(count>1){
	
		return false;
	}
	   
	return true;
}
int main(){
	string str;
    str="acto atc";
	if(perm(str)){
		cout<<" yes";
	}
	else
	  cout<<"no";
	return 0;
}
