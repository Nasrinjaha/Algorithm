#include <bits/stdc++.h>
using namespace std;

int d[100][100];
int v[100][100];
int n;
void floydWarshall(){
	 int i, j, k;

	for (k = 0; k < n; k++) {

		for (i = 0; i < n; i++) {

			for (j = 0; j < n; j++) {

				d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
			}
		}
	}

}

int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&v[i][j]);
            d[i][j] = v[i][j];
        }
	}
	floydWarshall();
	for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",d[i][j]);

        }
        cout << endl;
	}
	return 0;
}
/*
4
0 5 99 99
99 0 3 99
99 99 0 4
1 8 99 0
*/



