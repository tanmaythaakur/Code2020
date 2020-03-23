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
            for(int i=0; i<this->n; i++) ids[i] = -1;
        }

        int root(int i)
        {
            while(ids[i] > 0) i = ids[i];
            return i;
        }

        // Order n complexity
        bool connected(int p, int q)
        {
            return root(p)==root(q);
        }

        // Order n complexity
        void unite(int p, int q)
        {
            int pr = root(p);
            int qr = root(q);
            if(abs(ids[pr]) > abs(ids[qr])){
                int temp = ids[qr];
                ids[qr] = ids[p];
                ids[pr] += temp;
            }
            else{
                int temp = ids[pr];
                ids[pr] = q;
                ids[qr] += temp;
            }
        }

        void showIds()
        {
            for(int i=0; i<this->n; i++){
                cout << ids[i] << " ";
            }
            cout << endl;
        }
};



int main()
{
    int n = 10;
    UnionFind uf = UnionFind(n);

    cout << uf.connected(3, 4) << endl;
    uf.unite(3, 4);
    // uf.showIds();
    cout << uf.connected(3, 4) << endl;
    uf.unite(8, 1);
    // uf.showIds();
    uf.unite(1, 4);
    // uf.showIds();
    cout << uf.connected(3, 8) << endl;
    uf.unite(8, 9);
    // uf.showIds();
    uf.unite(9, 0);
    // uf.showIds();
    uf.unite(2, 6);
    uf.unite(2, 5);
    uf.unite(6, 7);
    uf.unite(7, 9);
    // uf.showIds();
    uf.unite(6, 4);
    return 0;
}