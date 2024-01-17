//This code is made by Chandravo Bhattacharya
#include<bits/stdc++.h>
using namespace std;

vector<string> fullJustify(vector<string>& words, int maxWidth) {
    vector<string> res;
    unsigned int i=0;
    while (i<words.size()){
        cout<<endl<<"new start"<<endl;
        int currWidth = 0;
        int currWords = 0;
        int j = i;
        while (i<words.size() && words[i].size()+currWidth<=maxWidth){
            currWidth+=words[i].size()+1;
            i++;
            currWords++;
        }
        cout<<"currWidth currWords = "<<currWidth<<" "<<currWords<<endl;
        if(i==words.size() || currWords==1){
            cout<<"hello"<<endl;
            string s = "";
            int space_rem = maxWidth;
            for (;j<i;j++){
                s+=words[j];
                if (j!=i-1) {
                    s.push_back(' ');
                    space_rem-=(words[j].size()+1);
                }
                else space_rem-=words[j].size();

            }
            for (int k=0;k<space_rem;k++) s.push_back(' ');
            res.push_back(s);
            continue;
        }
        // int space = ceil((maxWidth-(double)currWidth+currWords)/(currWords-1.0));
        // int rem = (maxWidth-currWidth+currWords)-space*(currWords-2);
        int total_spaces = maxWidth-currWidth+currWords;
        vector<int> spaces(currWords-1,total_spaces/(currWords-1));
        int rem = total_spaces%(currWords-1);
        for (int k=0;k<rem;k++) spaces[k]++;
        for (auto _:spaces) cout<<_<<" ";
        cout<<endl;
        // cout<<"space rem = "<<space<<" "<<rem<<endl;
        int k = 0;
        string s = "";
        for (;j<i;j++){

            s+=words[j];
            if (j==i-1) continue;
            // if (j==i-2 && rem>0){
            //     for (int k =0;k<rem;k++) s.push_back(' ');
            // }
            // else {
            //     for (int k=0;k<space;k++) s.push_back(' ');
            // }
            for (int _=0;_<spaces[k];_++) s.push_back(' ');
            k++;
        }
        res.push_back(s);
    }  
    return res;  
}

int main(){
    // vector<string> words{"This", "is", "an", "example", "of", "text", "justification."};
    // vector<string> words{"Science","is","what","we","understand","well","enough","to","explain","to","a","computer.","Art","is","everything","else","we","do"};
    vector<string> words{"ask","not","what","your","country","can","do","for","you","ask","what","you","can","do","for","your","country"};
    int maxWidth = 16;
    auto res = fullJustify(words,maxWidth);
    for (auto i:res){cout<<i<<endl;}
}