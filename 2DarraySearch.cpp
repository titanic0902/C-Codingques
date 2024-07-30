#include<iostream>
using namespace std;

bool Search(int matrix[][100],int n,int m,int key){
    int low =0;
    int high = n*m-1;
    while(low<=high){
        int mid = (low+high)/2;
        int row = mid/m;
        int col = mid%m;
        if(matrix[row][col] == key) return true;
       else if(matrix[row][col]< key){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return false;

}


int main(){
    int key;
    cin>>key;
    int n;
    cin>>n;
    int m;
    cin>>m;

    int matrix[100][100];

    for(int  i=0;i<n;i++){
        for(int j=0 ;j<m;j++){
            cin>>matrix[i][j];
        }
    }
     for(int  i=0;i<n;i++){
        for(int j=0 ;j<m;j++){
            cout<<matrix[i][j]<<" ";
        }
    }
    cout<<endl;
    
    if (Search(matrix, n, m, key)) {
        cout << "Element found." << endl;
    } else {
        cout << "Element not found." << endl;
    }
}