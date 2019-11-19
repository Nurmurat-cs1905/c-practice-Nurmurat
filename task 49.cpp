#include<iostream>
#include<cmath>
using namespace std;
    int main(){
    	int a,b,c,d,max=0;
    	cin>>a>>b>>c>>d;
    	if(a%2==0&&a>max){
		max=a;
		}
		else if(b%2==0&&b>max){
		  max=b;
		}
		else if(c%2==0&&c>max){
			max=c;
		}
		else if(d%2==0&&d>max){
			max=d;
		}
		else{ 
		cout<<"not found";
		}
	    cout<<max;
    return 0;
	}
