//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    if (flowerbed.size()==1){
        if ((flowerbed[0]==0 && n==1) || n==0){
            return true;
        }
        else{
            return false;
        }
    }
    if (flowerbed[0]==0 && flowerbed[1]==0){
        flowerbed[0]=1;
        n--;
    }
    if (flowerbed[flowerbed.size()-1]==0 && flowerbed[flowerbed.size()-2]==0){
        flowerbed[flowerbed.size()-1]=1;
        n--;
    }
    if (n<=0){
        return true;
    }
    for (int i=1;i<flowerbed.size()-1;i++){
        if (flowerbed[i]==0 && flowerbed[i-1]==0 && flowerbed[i+1]==0){
            flowerbed[i]=1;
            n--;
        }
        if (n==0){
            return true;
        }
    } 
    return false;     
}

int main(){
    vector<int> f{1,0,0,0,0,1};
    cout<<canPlaceFlowers(f,2);
}