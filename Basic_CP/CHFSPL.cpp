#include <iostream>
using namespace std;

int main() {
    int t;
    std::cin >> t;
    
    while(t--){
        int a,b,c;
        std::cin >> a>>b>>c;
        
        int sum1=a+b;
        int sum2=b+c;
        int sum3=a+c;
        
        int ans = max(sum1,max(sum2,sum3));
        
        std::cout << ans << std::endl;
    }
    
	// your code goes here
	return 0;
}
