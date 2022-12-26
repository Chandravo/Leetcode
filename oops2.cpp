#include<iostream>
using namespace std;
class fraction{
    long int num;
    long int denom;
    public:

    fraction(long x=0,long y=1){
        num=x;
        try{
            if(y==0)
             throw y;
             denom=y;
        }
        catch(long y){
            cout<<"denominator is 0"<<endl;
        }
        }

    // void display(){
    //     double k=(double)num/(double)denom;
    //     cout<<"fraction:"<<num<<"/"<<denom<<" which is equal to "<<k<<endl;
    // }
	void display(){
		// cout<<"here";
        // double k=(double)num/(double)denom;
        // cout<<"fraction:"<<num<<"/"<<denom<<" which is equal to "<<k<<endl;
        int hcf=1;
        for (int i=1;i<denom;i++){
			// cout<<i;
            if (num%i==0 && denom%i==0){
                hcf=i;
            }
        }
		
        cout<<"fraction "<<num/hcf<<"/"<<denom/hcf<<endl;
    }
    void operator++(){
        num=num+denom;
    }
    friend fraction operator+(fraction f1,fraction f2);
    friend fraction operator-(fraction f1,fraction f2);
    friend fraction operator*(fraction f1,fraction f2);
    friend fraction operator/(fraction f1,fraction f2);
};
fraction operator+(fraction f1,fraction f2){
    fraction f3;
    f3.num=(f2.denom)*(f1.num)+(f2.num)*(f1.denom);
    f3.denom=(f1.denom)*(f2.denom);
    return f3;
};
fraction operator-(fraction f1,fraction f2){
    fraction f3;
    f3.num=(f2.denom)*(f1.num)-(f2.num)*(f1.denom);
    f3.denom=(f1.denom)*(f2.denom);
    return f3;
};
fraction operator*(fraction f1,fraction f2){
    fraction f3;
    f3.num=(f1.num)*(f2.num);
    f3.denom=(f1.denom)*(f2.denom);
    return f3;
};
fraction operator/(fraction f1,fraction f2){
    fraction f3;
    f3.num=(f1.num)*(f2.denom);
    long int k=(f1.denom)*(f2.num);
    try{
        if(k==0)
            throw k;
        f3.denom=k;
    }
    catch(long k){
        cout<<"denominator is 0";
    }
    return f3;
}
int main(){
   fraction a=fraction(10,20);
   fraction b=fraction(10,30);
   a.display();
   b.display();
   fraction f3 =a+b;
   f3.display();
   
}