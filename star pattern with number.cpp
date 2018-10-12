#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    cout.fill('*'); //
     
    for(int i =1; i<n;i++)
    {  
        cout.width(i);      // only valid till 1st cout.
        for(int j=1;j<i;j++)    // no execution in first iteration
        {
            cout<<j;
        
        }
        cout<<endl;
    }

    return 0;
}
