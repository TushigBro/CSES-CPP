#include<iostream>
#include<vector>
#define ll long long
using namespace std;

int main(){
    ll n;
    cin >> n;
    vector<ll> set1, set2;
    ll sum = (n * (n + 1) / 2);
    if(sum % 2 != 0){
        cout << "NO" <<endl;
    }
    else{
        cout << "YES" <<endl;
        ll mid = sum / 2;

        for(ll i = n; i >= 1; i--){
            if(i <= mid){
                set1.push_back(i);
                mid -= i;
            }
            else{
                set2.push_back(i);
            }
        }
        cout << set1.size() <<endl;
        for(ll i = 0; i < (int)set1.size(); i++){
            cout << set1[i] << " ";
            cout << endl;
        }
        cout << set2.size() <<endl;
        for(ll i = 0; i < (int)set2.size(); i++){
            cout << set2[i] << " ";
        }
    }
}


// n % 4 == 3;
// n % 4 == 0;