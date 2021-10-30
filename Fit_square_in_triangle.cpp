#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int b,sq=0,area1,area2=4,temp;
    cin>>b;
    if(b<=3)
        cout<<0<<endl;
    else{
        if(b%2==0){
           area1=b*b;
           area2=4;
           temp=(area1/area2)-(b/2);
           sq=temp/2;
           cout<<sq<<endl;
        }
        else{
            b-=1;
           area1=b*b;
           area2=4;
           temp=(area1/area2)-(b/2);
           sq=temp/2;
           cout<<sq<<endl;
        }
    }
}
	return 0;
}
