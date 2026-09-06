#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int cont = 0;
    vector<int> t(n);
    vector<char> p(n);
    
    for(int i = 0;i < n;i++) cin >> t[i] >> p[i];

    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            if(t[i] == t[j] && p[i] != p[j]){
                int ix = i;
                int jx = j;
                t.erase(t.begin() + ix);
                p.erase(p.begin() + ix);
                t.erase(t.begin() + jx);
                p.erase(p.begin() + jx);
                i--;
                j--;
                cont++;
            }
        }
    }
    
    cout << cont;

    return 0;
}
