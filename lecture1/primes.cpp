#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(int argc, char* argv[]){
    int limit = atoi[argv[1]];
    int count = 0;

    for(int n = 2; n <= limit; n++){
        bool prime = true;
        int root = (int) sqrt(n);

        for(int d = 2; d <= root; d++){
            if( n % d == 0){
                prime = false;
                break;
            }
        }
        if(prime){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}