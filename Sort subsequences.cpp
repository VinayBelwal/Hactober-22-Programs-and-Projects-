#include<iostream>
#include<string>
#include<algorithm>
#include<cstring>
#include<vector>
using namespace std;
int cnt=0;
void generate_subsequences(char *in,char *out,int i,int j,vector<string> &v){
    
	//base case
	if(in[i]=='\0'){
		out[j]='\0';
		v.push_back(out);
        cnt++;
		return;
	}
	//recursive case
	//exclude the current char
	
	generate_subsequences(in,out,i+1,j,v);
	//include  the current char
	out[j]=in[i];
	generate_subsequences(in,out,i+1,j+1,v);
	
}
bool compare(string s1,string s2){
    if(s1.length()==s2.length()){
        return s1<s2;
    }
    return s1.length()<s2.length();
}
int main(){
	char input[10];
    cin>>input;
	char output[10];
    vector<string> v;
	generate_subsequences(input,output,0,0,v);
    sort(v.begin(),v.end(),compare);
    for(auto s:v){
        cout<<s<<" ";
    }
    cout<<cnt;
	return 0;
}