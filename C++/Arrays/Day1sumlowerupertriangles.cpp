// Sum of upper and lower triangles (Easy)

/*
Given a square matrix of size N*N, print the sum of upper and lower triangular elements. 
Upper Triangle consists of elements on the diagonal and above it. 
The lower triangle consists of elements on the diagonal and below it. 

Example 1:
Input:
N = 2
mat[][] = {{1, 2},
           {3, 4}}
Output: 
7 8
Explanation:
Upper triangular matrix:
1 2
  4
Sum of these elements are 7.
Lower triangular matrix:
1
3 4
Sum of these elements are 8.
*/

// ----------------------------------------------------------------------

#include<bits/stdc++.h>
using namespace std;

vector <int> sumTriangles(const vector<vector<int> >& matrix, int n);
  
// ################# Main Code  #######################
int main() {
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix(n); 
        for(int i=0; i<n; i++)
        {
            matrix[i].assign(n, 0);
            for( int j=0; j<n; j++)
            {
                cin>>matrix[i][j];
            }
        }
       vector <int> result;
        result = sumTriangles(matrix,n);
        for (int i = 0; i < result.size(); ++i)
            cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}

vector <int> sumTriangles(const vector<vector<int> >& matrix, int n)
    { 
        vector <int> ans;
        int upper_sum = 0;
        int lower_sum = 0;
        int diagonal_sum = 0;
        for(int i =0; i<n; i++){
            for(int j =0; j<n; j++){
                if(i<j){
                    upper_sum+=matrix[i][j];
                }
                else if(i>j){
                    lower_sum+=matrix[i][j];
                }
                else if(i==j){
                    diagonal_sum+= matrix[i][j];
                }
            }
        }
        
        ans.push_back(upper_sum+diagonal_sum);
        ans.push_back(lower_sum+diagonal_sum);
        
        return ans;
    }