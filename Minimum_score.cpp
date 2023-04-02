//question: https://www.hackerearth.com/practice/algorithms/greedy/basics-of-greedy-algorithms/practice-problems/algorithm/minimum-score-1528c5c0/
//solution:
#include<bits/stdc++.h>
using namespace std;

struct Pair {
    int donkey;
    int monkey;
};

void minOrder(int arr[], int N, int K, int donkey, int monkey) {
    if (donkey == 0 || monkey == 0) {
        cout<<"0\n";
        for (int i = 0; i < K-1; i++) {
            cout<<i+1<<" "<<i+1<<endl;
        }
       cout<<K<<" "<<N<<endl;
    }
    else {
        donkey = 0, monkey = 0;
        for (int i = K-1; i < N; i++) {
            if (arr[i] == 1) donkey++;
            else monkey++;
        }
        if (donkey == 0 || monkey == 0) {
            cout<<"0\n";
            for (int i = 1; i < K; i++) {
               cout<<i<<" "<<i<<endl;
            }
            cout<<K<<" "<<N<<endl;
        }
        else {
            int index = N-1;
            struct Pair v[K];
            int m = 0, i, prev = arr[N-1];
            for (i = N-1; i >= 0 && m < K-1;) {
                for (int j = i; N-(N-j-1) >= K-m; j--) {
                    if (arr[j] != prev) {
                        break;
                    }
                    i--;
                }
                prev = arr[i];
                v[m].donkey = i+2;
                v[m].monkey = index+1;
                m++;
                index = i;
            }
            v[K-1].donkey = 1;
            v[K-1].monkey = index+1;
            m++;
            donkey = 0;
            monkey = 0;
            for (int i = index; i >= 0; i--) {
                if (arr[i] == 1) donkey++;
                else monkey++;
            }
            if (donkey == 0 || monkey == 0) {
                cout<<"0\n";
                for (int i = K-1; i >= 0; i--) {
                    cout<<v[i].donkey<<" "<<v[i].monkey<<endl;
                }
            }
            else {
                cout<<"1\n";
                for (int i = 1; i < K; i++) {
                    cout<<i<<" "<<i<<endl;
                }
                cout<<K<<" "<<N<<endl;
            }
        }
    }
}

int main() {
    int N, K, donkey = 0, monkey = 0;
    cin>>N>>K;
    int arr[N];
    for (int i = 0; i < N; i++) {
        cin>>arr[i];
        if (arr[i] == 1) donkey++;
        else monkey++;
    }
    minOrder(arr, N, K, donkey, monkey);
    return 0;
}