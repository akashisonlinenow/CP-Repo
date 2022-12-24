#include <iostream>
using namespace std;

int main() {
    int t;
    std::cin >> t;
    
    while(t--){
        int n,x;
        std::cin >> n>>x;
        
        int ans = -1;
        
        for (int i = 0; i < n; i++) {
            int s,r;
            std::cin >> s>>r;
            
            if(s<=x){  //size compatible condition
                ans = max(r,ans);
            }
            
            /* code */
        }
        std::cout << ans << std::endl;
    }
	// your code goes here
	return 0;
}
