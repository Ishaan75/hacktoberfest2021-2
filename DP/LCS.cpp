#include<bits/stdc++.h>
using namespace std;

int LCS(int i,int j,string A,string B){
	
	if(A[i]=='\0' || B[i] == '\0')
		return 0;
		
	else if(A[i] == B[j])
		return 1 + LCS(i+1,j+1,A,B);
	
	else
		return max(LCS(i+1,j,A,B),LCS(i,j+1,A,B));
	
}

int main(){
	
	string s1,s2;
	
	cout<<"Enter the  first string "<<endl;
	getline(cin,s1);
	
	cout<<"Enter the second string "<<endl;
	getline(cin,s2);
	
	cout<<" The length of the longest common subsequence of "<<s1<<" and "<<s2<<" is "<<LCS(0,0,s1,s2)<<endl;
	
	return 0;
}
