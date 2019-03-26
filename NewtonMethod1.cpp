#include<iostream>
#include<math.h>
#include <stdlib.h> 
using namespace std;

double x = 0;
double e = 0;
double equation(double key){
	double ans = 0;
	ans = (key*key*key)-(7*key*key)+(8*key)-3;
	return ans;
}

double equationDiff(double key){
	double ans = 0;
	ans = (3*key*key)-(14*key)+8;
	return ans;
}

int main(){
	cout<<"x :";
	cin>>x;
	cout<<"e :";
	cin>>e;
	x = 5;
	while(true){
		if(abs(equation(x))<e){
			cout<<"x : "<<x;
			break;
		}
		cout<<"x1 :"<<x<<endl;
		x = x -(equation(x)/equationDiff(x));
	}
}
