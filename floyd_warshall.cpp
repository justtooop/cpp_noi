int adjmax[MAXN+1][MAXN+1];
void init(){
	for (int i = 0; i <= MAXN; i++){
		for (int j = 0; j <= MAXN; j++){
			adjmax[i][j] = 2e9;
		}
	}
}
// After input
for (int i = 1; i <= MAXN; i++){
	for (int j = 1; j <= MAXN; j++){
		for (int k = 1; k <= MAXN; k++){
			adjmax[i][j] = min(adjmax[i][j], adjmax[i][k] + adjmax[k][j]);
		}
	}
}
// Note that this is 1-indexed
