class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        if(coordinates.size() == 1) return true;

        int dx=coordinates[1][0]-coordinates[0][0];
        int dy=coordinates[1][1]-coordinates[0][1];

        for(int i=2;i<coordinates.size();i++){
            int dx_i=coordinates[i][0]-coordinates[0][0];
            int dy_i=coordinates[i][1]-coordinates[0][1];

            // if(dy/dx!=dy_i/dx_i) return false;
            // To handle zero denominator
            if(dy*dx_i != dy_i*dx) return false;
        }
        return true;
    }
};
