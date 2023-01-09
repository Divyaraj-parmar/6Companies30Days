class Solution {
    int distance(vector<int> p1,vector<int> p2){
        int x1,x2,y1,y2;
        x1 = p1[0];
        y1 = p1[1];
        x2 = p2[0];
        y2 = p2[1];

        int dist =  ((y2-y1)*(y2-y1))+((x2-x1)*(x2-x1));
        return dist;
    }
public:
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        unordered_map<int,double> m;
        m[distance(p1,p2)]++;
        m[distance(p1,p3)]++;
        m[distance(p1,p4)]++;
        m[distance(p2,p3)]++;
        m[distance(p2,p4)]++;
        m[distance(p3,p4)]++;
       
        if(m.size() == 2){
        for(auto it:m){
            if(it.first == 0 or it.second != 2 and it.second != 4) return false;
            // cout << it.first << " " << it.second << endl;
        }
       } else {
           return false;
       }
        return true;
    }
};