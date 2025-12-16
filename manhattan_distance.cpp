#include<bits/stdc++.h>
using namespace std;
    
void manhattan(vector<pair<int,int>>&segments){
    int maxsum=segments[0].first+segments[0].second;
    int minsum=segments[0].first+segments[0].second;
    int maxdiff=segments[0].first-segments[0].second;
    int mindiff=segments[0].first-segments[0].second;
    int maxis=0;
    int minis=0;
    int maxid=0;
    int minid=0;


    int n=segments.size();
    for(int i=1;i<n;i++){
       int sum=segments[i].first+segments[i].second;
        int diff=segments[i].first-segments[i].second;
        if(sum>maxsum){
            maxsum=sum;
            maxis=i;
        }
        if(sum<minsum){
            minsum=sum;
            minis=i;
        }
        if(diff>maxdiff){
            maxdiff=diff;

            maxid=i;
        }
        if(diff<mindiff){
            mindiff=diff;
            minid=i;
        }
    }
    int ans;
    if(maxdiff-mindiff>maxsum-minsum){
        ans=maxdiff-mindiff;
        cout<<ans<<"\n";
          cout<<segments[minid].first<<" "<<segments[minid].second<<" ";
        
        cout<<segments[maxid].first<<" "<<segments[maxid].second<<" ";
       


    }
    else{
        ans=maxsum-minsum;
        cout<<ans<<"\n";
         cout<<segments[minis].first<<" "<<segments[minis].second<<" ";
        cout<<segments[maxis].first<<" "<<segments[maxis].second;
        
    }
   
}
int main(){
    int n;
    cout<<"enter no points";
    cin>>n;
    vector<pair<int,int>>segments(n);
    for(int i=0;i<n;i++){
        cin>>segments[i].first;
        cin>>segments[i].second;
    }
   manhattan(segments);

    
}