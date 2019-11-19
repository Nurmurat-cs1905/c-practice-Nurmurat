#include<iostream>
#include<cmath>
using namespace std;
    int main(){
    	int a,b,c,d,max=0;
    	cin>>a>>b>>c>>d;
    	if(a%2==0&&a>b&&a>c&&a>d){
		max=a;
		}
		else if(b%2==0&&b>a&&b>c&&b>d){
		  max=b;
		}
		else if(c%2==0&&c>a&&c>b&&c>d){
			max=c;
		}
		else if(d%2==0&&d>a&&d>b&&d>>c){
			max=d;
		}
		else{ 
		cout<<"not found";
		}
	    cout<<max;
    return 0;
	}
