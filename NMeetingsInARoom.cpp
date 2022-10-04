#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;
struct meeting {
    int start;
    int end;
    int pos;
}
bool compare(meeting m1, meeting m2){
    if(m1.end < m2.end) return true;
    else if(m1.end > m2.end) return false;
    else if(m1.pos < m2.pos) return true;
    else return false;
}
vector<int> maximumMeetings(vector<int> &start, vector<int> &end) {
    int N = start.size();
    meeting meet[N];
    for(int i=0;i<N;i++){
        meet[i].start = start;
        meet[i].end = end;
        meet[i].pos = i+1;
    }
    sort(meet, meet+N, compare);
    int limit = meet[0].end;
    vector<int> meetNumber;
    meetNumber.push_back(meet[0].pos);
    for(int i=1;i<N;i++){
        if(meet[i].start > limit){
            meetNumber.push_back(meet[i].pos);
            limit = meet[i].end;
        }
    }
    for(auto x:meetNumber){
        cout<<x<<" ";
    }
}
