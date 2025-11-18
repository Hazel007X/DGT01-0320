#include <iostream>
using namespace std;
int main() {
	 int n, x, i, sum, max;
    
    cin >> n;
    cin >> x;
    sum = x;
    max = x;
    
    for (i=2;i<=n;i++){
    	
    	cin >> x;
     	sum+=x;
    
    	if(x>max){
    	max=x;
		}
	}
	
	cout << sum << endl;
	cout << max << endl;
	
	return 0;
}
    
