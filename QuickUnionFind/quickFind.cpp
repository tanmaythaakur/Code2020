#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

class UnionFind{
    int *ids;
    int n;
    public:
        UnionFind(int n)
        {
            ids = new int[n];
            this->n = n;
            iota(ids, ids + n, 0);
            // for(int i=0; i<n; i++) cout << ids[i] << endl;
        }

        // Order 1 complexity
        bool connected(int p, int q)
        {
            return ids[p]==ids[q];
        }

        // Order n complexity
        void unite(int p, int q)
        {
            int pid = ids[p], qid = ids[q];
            for(int i=0; i<this->n; i++){
                if(ids[i] == pid) ids[i] = qid;
            }
        }
};



int main()
{
    int n = 10;
    UnionFind uf = UnionFind(n);

    cout << uf.connected(3, 4) << endl;
    uf.unite(3, 4);
    cout << uf.connected(3, 4) << endl;
    uf.unite(8, 1);
    uf.unite(1, 4);
    cout << uf.connected(3, 8) << endl;

    return 0;
}