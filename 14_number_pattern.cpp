#include <iostream>
using namespace std;
int main() {
    int row,n,i,no;

    cin>>n;

    for(row = 1; row<=n ; row=row+1){
        //1.print n-row times spaces
        for (i = 1 ; i <= n-row ; i=i+1){
            cout<<' ';
        }
        //2.print 2*row-1 times number starting:1
        no = 1;
        for(i = 1; i<=2*row-1 ; i=i+1){
            cout<<no;
            no = no+1;
        }
        //3. go to next line by endl
        cout<<endl;
    }
    return 0;
    
}
