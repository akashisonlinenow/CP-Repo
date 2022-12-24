#include <iostream>
using namespace std;

int main() {
    int t;
    std::cin >> t;
    
    while(t--){
        int n,x,c;
        std::cin >> n>>x>>c;
        int a[n];
        // int tcost = 0, cost=0;
        
        for (int i = 0; i < n; i++) {
            
            std::cin >> a[i];
            // tcost+=a[i];
            /* code */
        }
        int sum = 0;
        for (int i = 0; i < n; i++) {
            if(((x-a[i])-c)>0){
                sum+=(x-c);
            }
            else 
                sum+=a[i];
            /* code */
        }
        std::cout << sum << std::endl;
    }
	// your code goes here
	return 0;
}
