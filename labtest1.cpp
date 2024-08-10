#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int determinant(vector<vector<int>> vec){
    int result=vec[0][0]*vec[1][1]-vec[0][1]*vec[1][0];
    return result;
}

int main(){
    int row,col;
    cout<<"Enter row and col: ";
    cin>>row>>col;
    vector<vector<int>> vec;
    int temp;
    vector<int> tempArr;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<"Enter number: ";
            cin>>temp;
            tempArr.push_back(temp);
        }
        vec.push_back(tempArr);
        tempArr.clear();
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    if(row==2){
        cout<<"Determinant is : "<<determinant(vec);
    }
    if(row==3){
        vector<vector<int>> v1={{vec[1][1],vec[1][2]},{vec[2][1],vec[2][2]}};
        vector<vector<int>> v2={{vec[1][0],vec[1][2]},{vec[2][0],vec[2][2]}};
        vector<vector<int>> v3={{vec[1][1],vec[1][1]},{vec[2][0],vec[2][1]}};
        int result=vec[0][0]*determinant(v1)-vec[0][1]*determinant(v2)+vec[0][2]*determinant(v3);
        cout<<"Determinant is : "<<result;
    }
    return 0;
}
