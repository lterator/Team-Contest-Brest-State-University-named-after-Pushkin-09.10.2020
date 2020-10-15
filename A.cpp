#include <bits/stdc++.h>

using namespace std;
using namespace __gnu_pbds;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, r = 0, res = 0;
    string Array;
    cin>>n>>Array;
    char step = Array[0];
    if(step == 'a' or step == 'h')
        r++;
    for(int i = 1; i<Array.size(); i++){
        if(Array[i] == 'a' or Array[i] == 'h'){
            //cout<<step<<" "<<Array[i]<<" "<<r<<endl;
            if((step == 'a' or step == 'h') and step!=Array[i])
                r++;
            else{
                if(r > res)
                    res = r;
                r = 1;
            }
        }
        else{
            if(r > res)
                res = r;
            r = 0;
        }
        step = Array[i];
    }
    if(r > res)
        res = r;
    cout<<res;
    return 0;
}
