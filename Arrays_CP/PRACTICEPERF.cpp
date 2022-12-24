#include <iostream>
using namespace std;

int main() {
    
    int p1,p2,p3,p4;
    std::cin >> p1>>p2>>p3>>p4;
    
    int ans = 0;
    if(p1>=10)
     ans++;
    if(p2>=10)
     ans++;
    if(p3>=10)
     ans++;
    if(p4>=10)
     ans++;
    std::cout << ans << std::endl;
	// your code goes here
	return 0;
}
