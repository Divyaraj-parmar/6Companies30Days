class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
    //Slope  of a line (x1,y1),(x2,y2) is m = (y2-y1) / (x2-x1);
     int n = points.size();
     if(n<=2) return n;
     int maxP = 2; // minimum points to form line;
     for(int i=0;i<n;i++){
         for(int j=i+1;j<n;j++){
             int totalP = 2; 
             for(int k=0;k<n;k++){
                 if(k != i and k != j) {// ignore points which form lines
                   if(((points[j][1]-points[i][1])*(points[i][0]-points[k][0])) == ((points[i][1]-points[k][1])*(points[j][0]-points[i][0]))) totalP++;
                   
                 }
             }
             maxP = max(totalP,maxP);
         }
     }
     return maxP;
    }
};