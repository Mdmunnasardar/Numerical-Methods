#include<iostream>
 using namespace std;

 int main(){
    int i,j,k,n;
    float A[20][20],c,x[10];

    cout<<"\nEnter the sixe of matrix: ";
    cin>>n;

    cout<<"Enter the augemented matrix: "<<endl;

    for( i=1;i<=n;i++){//i rows n//j n+1 is coloums
        for( j=1;j<=n+1;j++){
            cout<<"A["<<i<<"]["<<j<<"]: ";
            cin>>A[i][j];
        }

    }
    for(j=1;j<=n;j++){
        for(i=1;i<=n;i++){
            if(i!=j){
                c=A[i][j]/A[j][j];
                for(int k=1;k<=n+1;k++){
                A[i][k]=A[i][k]-c*A[j][k];
            
            }
        }
    }
 }
    cout<<"\nThe Solution is : "<<endl;

    for(int i=1;i<=n;i++){
        x[i]=A[i][n+1]/A[i][i];
        cout<<"x"<<i<<" = "<<x[i]<<endl;
    }
    return 0;

 }