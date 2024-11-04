// Q no:03
#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout << "Enter Row Size: ";
    cin >> n;
    cout << "Enter Column Size: ";
    cin >> m;
    int numbers[n][m];
    if (n != m){
        cout << "The Matrix Is Not Square.Daigonal Sum Can Not Be Calculated" << endl;
    } 
    else{  
        for (int i=0; i<n; i++){
            for (int j=0; j<m; j++){
                cin >> numbers[i][j];
            }
        }
        int sum = 0;
        for (int i=0; i<n; i++){
            sum += numbers[i][i];
        }
        cout << "Sum of Diagonal Elements of Matrix: " << sum << endl;
    }    
    return 0;
}