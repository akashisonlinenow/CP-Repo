#include <iostream>
using namespace std;

int main() {
    int t;
    std::cin >> t;
    
    while(t--){
        int n,d,count=0;
        std::cin >> n;
        int arr[n];
        for(int i=0; i<n; i++){
            std::cin >> d;
            arr[i] = d;
        }
        for(int i=0;i<n;i++){
            if(arr[i]>=1000)
                count++;
        }
        std::cout << count << std::endl;
    }
	// your code goes here
	return 0;
}
