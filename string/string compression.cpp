/*NOTE : to_string isn't compatible with my compiler...try it once
String Compression: Implement a method to perform basic string compression using the counts
of repeated characters. For example, the string aabcccccaaa would become a2blc5a3, If the
"compressed" string would not become smaller than the original string, your method should return
the original string. You can assume the string has only uppercase and lowercase letters (a - z). 

*/


#include<bits/stdc++.h>
#include<iostream>
#include<string>

using namespace std;

string transform(string str){
	int a=str.length();
	string str1;
	int i=0,j;
	int n=str.length();
	while(n>1){
		str1+=str[i];
	    j=i+1;
	    int k=0;
		while(str[j]==str[i]){
			j++;
			k++;
		}
		if(k!=0){

		  
		  str1+=to_string(k);
	    } 
		i=i+k+1;
		n=n-k-1;
	}
	str=str1;
	return str;
}
int main(){
	string str="aabcccccd";
	//cout<<"enter a string ";
	//cin>>str;
	cout<<"final string is "<<transform(str);
}
