typedef pair <int, int> pi;
typedef vector <int> vi;
typedef vector <pi> vpi;
vpi adjlist[MAXN+1]; // .first = node, .second = distance
vi DIST(MAXN+1, 2e9); // Where MAXN is the maximum number of nodes
priority_queue <pi, vector <pi>, greater <pi> > pq;
pq.emplace(0, source);
DIST[source] = 0;
while (pq.size()){
	int curdist = pq.top().first, N = pq.top().second; pq.pop();
	if (DIST[N] != curdist) continue;
	for (auto E: adjlist[N]){
		if (DIST[E.first] > curdist + E.second) pq.emplace(DIST[E.first] = curdist + E.second, E.first);
	}
}
