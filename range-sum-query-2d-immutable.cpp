//https://leetcode.com/problems/range-sum-query-2d-immutable/

class NumMatrix {
private:
    vector<vector<int>> mat;
public:
    NumMatrix(vector<vector<int>> matrix) {
        vector<int> temp;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++)
                temp.push_back(matrix[i][j]);
            mat.push_back(temp);
            temp={};
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int sum=0;
        for(int i=row1;i<=row2;i++)
            for(int j=col1;j<=col2;j++)
                sum+=mat[i][j];
        return sum;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix obj = new NumMatrix(matrix);
 * int param_1 = obj.sumRegion(row1,col1,row2,col2);
 */
