#include<bits/stdc++.h>
typedef long long ll;
#define N 200011
using namespace std;
#define char_to_index(c) ((int)c- (int)'a')
std::vector<string> v;
struct mrn
{
	struct mrn *children[26];
	bool patta;
};

struct mrn *getNode(void){
	struct mrn *mal = NULL;
  mal = (struct mrn *)malloc(sizeof(struct mrn));
    if (mal)
    {
        int i;
        mal->patta = false;
        for (i = 0; i < 26; i++)
            mal->children[i] = NULL;
    }
    return mal;
}

void insert(struct mrn *root, string key)
{
    int level;
    int length = key.size();
    int index;
 
    struct mrn *lao = root;
 
    for (level = 0; level < length; level++)
    {
        index = char_to_index(key[level]);
        if (!lao->children[index])
            lao->children[index] = getNode();
 
        lao = lao->children[index];
    }
    lao->patta = true;
}

bool search(struct mrn *root, string key)
{
    int level;
    int length = key.size();
    int index;
    struct mrn *lao = root;
 
    for (level = 0; level < length; level++)
    {
        index = char_to_index(key[level]);
 
        if (!lao->children[index]){

        	v.push_back(key.substr(0,level+1));
            return false;
        }
 
        lao = lao->children[index];
    }
 
    if (lao != NULL){
    	return true;
    }
}





std::vector<string> acc;
std::vector<string> rej;
int main(){
	std::ios::sync_with_stdio(false);
	ll t;
	char ch,str[N];

	cin>>t;
	for(ll i=0;i<t;i++){
		cin>>ch>>str;
		if(ch=='+') acc.push_back(str);
		else rej.push_back(str);
	}
	struct mrn *root =getNode();
	bool flag=false;
	if(rej.size()==0){
		cout<<0<<endl;
		flag=true;
	}
	if(flag==false){
	for(ll i=0;i< acc.size();i++){
		insert(root,acc[i]);
	}
	for(ll i=0;i< rej.size();i++){
		bool a=search(root,rej[i]);
		if(a==true){
			cout<<-1<<endl;
			flag=true;
			break;
		}
	}
	int l=v.size();
	if(flag==false){
		sort(v.begin(),v.end());
		std::vector<string> f;
		f.push_back(v[0]);
		for(ll i=1;i<v.size();i++){
			if(v[i]!=v[i-1]){
				f.push_back(v[i]);
			}
		}
		cout<<f.size()<<endl;
		for(ll i=0;i< f.size();i++){
		cout<<f[i]<<endl;
	}
	}
	}


	
	return 0;
}