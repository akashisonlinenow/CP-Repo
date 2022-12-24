// Precomputation problem --> Explained in video no. 21 by luv in cp playlist.. this is one of the most imp approach

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    std::cin >> t;
    
    while(t--){
        int n,q;
        std::cin >> n>> q;
        int a[n+10];
        int forward[n+10];
        int backward[n+10];
        forward[0]=backward[n+1]=0;
        
        for(int i=1;i<=n;++i){
            std::cin >> a[i];
        }
        
        for(int i=1;i<=n;++i){
            forward[i]=__gcd(forward[i-1],a[i]);
        }
        
        for(int i=n;i>=1;--i){
            backward[i]=__gcd(backward[i+1],a[i]);
        }
        
        while(q--){
            int l,r;
            std::cin >> l>>r;
            int gc=0;
            
            std::cout << __gcd(forward[l-1],backward[r+1]) << std::endl;
            
        
           
            
        }
        
        
    }
	// your code goes here
	return 0;
}
