#include<bits/stdc++.h>
using namespace std;
int unionlength(vector<pair<int,int>>&segments){
    int n=segments.size();
    vector<pair<int,char>>points(2*n);
    for(int i=0;i<n;i++){
        points[2*i]=make_pair(segments[i].first,'F');
        points[2*i+1]=make_pair(segments[i].second,'T');
    }
    sort(points.begin(),points.end());
    int length=0;
    int counter=0;
    for(int i=0;i<n*2;i++){
        if(counter>0){
            length+=points[i].first-points[i-1].first;
        }
        if(points[i].second=='F'){
            counter++;
        }
        else{
            counter--;
        }
    }
    return length;
}
int main(){
    int n;
    cout<<"enter the size of points";
    cin>>n;
    vector<pair<int,int>>segments(n);
    for(int i=0;i<n;i++){
        cin>>segments[i].first;
        cin>>segments[i].second;
    }
    long long length=unionlength(segments);
    cout<<length;
    return 0;

}
