#include <iostream>
using namespace std;

int main() {
int T;
cin>>T;
while(T--){
    long long int A,B,C;
    int max,min,sum;
    cin>>A>>B>>C;
  //max  
    if(A>B){
        if (A>C)
            max=A;
        else
           max=C; 
    }
    else{
        if(B>C)
            max=B;
        else
            max=C;
}
//min
    if(A<B){
        if (A<C)
            min=A;
        else
           min=C; 
    }
    else{
        if(B<C)
            min=B;
        else
            min=C;
}
sum=A+B+C;
cout<<sum-max-min<<endl;
}
	return 0;
}
