//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;
//without using stack
// vector<int> asteroidCollision(vector<int>& asteroids) {
//     int j=0;
//     while(++j<asteroids.size()){
//         if ((asteroids[j]<0 && asteroids[j-1]>0)){
//             cout<<"inside if"<<endl;
//             while (j>0 && j<asteroids.size() &&((asteroids[j]<0 && asteroids[j-1]>0))){
//                 if(abs(asteroids[j])>abs(asteroids[j-1])){
//                     asteroids.erase(asteroids.begin()+j-1);
//                     j--;
//                 }
//                 else if (abs(asteroids[j])<abs(asteroids[j-1])){
//                     asteroids.erase(asteroids.begin()+j);
//                 }
//                 else{
//                     asteroids.erase(asteroids.begin()+j);
//                     asteroids.erase(asteroids.begin()+j-1);
//                     j--;
//                 }
//                 cout<<"inside if j = "<<j<<endl;
//                 cout<<"size of vect = "<<asteroids.size()<<endl;
//             }
//             cout<<"going ouside if"<<endl;
//         }
//         cout<<"outside if j = "<<j<<endl;
//     }  
//     return asteroids;      
// }

//using stack
vector<int> asteroidCollision(vector<int>& asteroids) {
    stack<int> s;
    int j=0;
    while (j<asteroids.size()){
        if (asteroids[j]>0){
            s.push(asteroids[j]);
        }
        else{
            while (!s.empty() && s.top()>0 && abs(asteroids[j])>s.top()){
                s.pop();
            }
            if (!s.empty() && s.top()==abs(asteroids[j])){
                s.pop();
            }
            else{
                if (s.empty() || s.top()<0){
                    s.push(asteroids[j]);
                }
            }
        }
        j++;
    }  
    vector<int> res(s.size());
    for (int i=s.size()-1;i>=0;i--){
        res[i]=s.top();
        s.pop();
    }
    return res;
}
int main(){
    vector<int> x{10,1,5,-10};
    for (int i:asteroidCollision(x)){
        cout<<i<<" ";
    }
}