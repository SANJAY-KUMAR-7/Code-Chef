#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int rev=0;
	    long int N;
	    cin>>N;
	    long int temp=N;
	    while(temp>0){
	        int last=temp%10;
	        rev=(rev*10)+last;
	        temp/=10;
	    }
	    cout<<rev<<endl;
	}
	return 0;
}
