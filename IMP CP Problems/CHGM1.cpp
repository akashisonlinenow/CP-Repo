// Kadanes Algorithm Problem-- (used to find maximum subarray from given array) 
#include <iostream>
using namespace std;

int main() {
    int t;
    std::cin >> t;
    
    while(t--){
        int n;int best = 0,sum=0;
        std::cin >> n;
        int arr[n];
        for(int i=0;i<n;i++)
            std::cin >> arr[i];
        for(int k=0;k<n;k++){
            sum = max(arr[k],sum+arr[k]);
            best= max(best,sum);
        }
        std::cout << best << std::endl;
    }
	// your code goes here
	return 0;
}
