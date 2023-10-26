#include <iostream>
using namespace std;

void TOH(int n, char source, char destination, char auxiliary, int &t) {
    if(n == 1){
        cout << "Move disk "<< n << " from " << source << " to " << destination << endl;  
        t++;
        return;
    }
    
    TOH(n-1,source,auxiliary,destination,t);
    cout << "Move disk "<< n << " from " << source << " to " << destination << endl;
    t++;

    TOH(n-1,auxiliary,destination,source,t);
}

int main() {
    int n;
    cin >> n;

    int total_moves = 0;
    TOH(n, 'S', 'D', 'A', total_moves);
    
    cout << "Total number of times the disk is moved: " << total_moves << endl;

    return 0;
}