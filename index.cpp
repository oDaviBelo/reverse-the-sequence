#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int alu;
    cin>>alu;
    int seq[alu];
    

    for(int i=0;i<alu;i++){
        cin>>seq[i];
    }

    for(int i = alu-1;i>=0;i--){
        cout<<seq[i]<<" ";
    } 

    return 0;
}
