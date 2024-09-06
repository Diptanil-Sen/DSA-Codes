#include<iostream>
using namespace std;
int main(){
    int m,n,i,j,c=0,row=0;
    cout<<"Enter the number of rows and colums: "<<endl;
    cin>>m>>n;
    int arr[m][n];
    cout<<"Enter the elements: "<<endl;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin>>arr[i][j];
            if(arr[i][j]==0){
                c++;
            }
        }
    }
    cout<<"Entered Array: "<<endl;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int sp[c][3];
    if (c>=(float)2/3*m*n){
        cout<<"It is a sparse matrix"<<endl;
        cout<<"3 Tuple Form Representation: "<<endl;
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                if (arr[i][j]!=0){
                    sp[row][0]=1;
                    sp[row][1]=j;
                    sp[row][2]=arr[i][j];
                    row++;
                }
            }
        }
        for(i=0;i<row;i++){
            for(j=0;j<3;j++){
                cout<<sp[i][j]<<" ";
            }
            cout<<endl;
        }
    }else{
        cout<<"It is not a sparse matrix"<<endl;
    }
    return 0;
}